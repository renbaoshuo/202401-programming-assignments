#include <stdio.h>

int n, f[25][25];

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        f[i][1] = f[i][i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 2; j < i; j++) {
            f[i][j] = f[i - 1][j - 1] + f[i - 1][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%7d", f[i][j]);
        }

        printf("\n");
    }

    return 0;
}
