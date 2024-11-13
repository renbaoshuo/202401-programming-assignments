#include <stdio.h>

int m, n, mat[10][10];

int main() {
    scanf("%d%d", &m, &n);

    m %= n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = n - m; j < n; j++) {
            printf("%d ", mat[i][j]);
        }

        for (int j = 0; j < n - m; j++) {
            printf("%d ", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}
