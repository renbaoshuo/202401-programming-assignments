#include <stdio.h>

int main() {
    int n;
    double ans = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            ans += 1.0 / (1 + 3 * i);
        } else {
            ans -= 1.0 / (1 + 3 * i);
        }
    }

    printf("sum = %.3lf\n", ans);

    return 0;
}
