#include <math.h>
#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) != EOF, n != 0) {
        double ans = n;

        for (int i = 2; i <= n; i++) {
            ans += (double)(n * 2 - 2 * (i - 1)) / (double)i;
        }

        /*
        for (int i = 1; i <= n; i++) {
            // 对角线左侧
            for (int j = i; j >= 2; j--) {
                ans += 1.0 / j;
            }

            ans += 1;

            // 对角线右侧
            for (int j = 2; j <= n - i + 1; j++) {
                ans += 1.0 / j;
            }
        }
        */

        printf("%.2lf\n", ans);
    }

    return 0;
}
