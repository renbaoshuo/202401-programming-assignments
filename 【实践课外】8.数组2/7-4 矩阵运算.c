#include <stdio.h>

int n, mat[15][15], sum = 0;

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n - 1; j++) {
            if (i + j != n + 1) {  // 剔除副对角线
                sum += mat[i][j];
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}
