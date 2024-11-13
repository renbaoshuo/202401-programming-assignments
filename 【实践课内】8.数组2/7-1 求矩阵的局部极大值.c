#include <stdio.h>

int m, n, matrix[25][25], flag;

int main() {
    scanf("%d%d", &m, &n);

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 2; i <= m - 1; i++) {
        for (int j = 2; j <= n - 1; j++) {
            if (matrix[i][j] > matrix[i - 1][j]
                && matrix[i][j] > matrix[i + 1][j]
                && matrix[i][j] > matrix[i][j - 1]
                && matrix[i][j] > matrix[i][j + 1]) {
                printf("%d %d %d\n", matrix[i][j], i, j);

                flag = 1;
            }
        }
    }

    if (!flag) {
        printf("None %d %d\n", m, n);
    }

    return 0;
}
