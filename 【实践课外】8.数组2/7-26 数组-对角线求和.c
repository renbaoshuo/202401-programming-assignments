#include <stdio.h>

int n, mat[105][105], sum1 = 0, sum2 = 0;

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) {
                sum1 += mat[i][j];
            }

            if (i + j == n + 1) {
                sum2 += mat[i][j];
            }
        }
    }

    printf("%d %d\n", sum1, sum2);

    return 0;
}
