#include <stdio.h>

int m, n, mat[25][25], min, min_i, min_j;

int main() {
    scanf("%d%d", &m, &n);

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    min = mat[1][1];
    min_i = 1;
    min_j = 1;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (mat[i][j] < min) {
                min = mat[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }

    printf("%d %d %d\n", min, min_i, min_j);

    return 0;
}
