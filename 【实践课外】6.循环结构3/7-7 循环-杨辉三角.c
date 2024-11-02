#include <stdio.h>

int n, m, a[25][25];

int main() {
    scanf("%d%d", &n, &m);

    if (n > m) {
        int t = n;
        n = m;
        m = t;
    }

    // 递推法计算杨辉三角
    for (int i = 1; i <= m; i++) {
        a[i][1] = a[i][i] = 1;

        for (int j = 2; j < i; j++) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    for (int i = n; i <= m; i++) {
        // 输出空格
        for (int j = 1; j <= m - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%d", a[i][j] % 10);

            if (j != i) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
