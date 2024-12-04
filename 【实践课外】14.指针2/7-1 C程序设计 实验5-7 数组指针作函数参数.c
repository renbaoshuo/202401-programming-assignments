#include <stdio.h>

int main() {
    int m, n;

    scanf("%d%d", &m, &n);

    for (int i = 1; i <= m; i++) {
        int sum = 0;

        for (int j = 1, x; j <= n; j++) {
            scanf("%d", &x);

            sum += x;
        }

        printf("%d %.1lf\n", sum, 1.0 * sum / n);
    }

    return 0;
}
