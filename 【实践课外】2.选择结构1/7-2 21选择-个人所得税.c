#include <stdio.h>

int main() {
    double n, ans = 0;

    scanf("%lf", &n);

    if (0 < n && n < 36000) {
        ans += 0.03 * n;
    } else if (n >= 36000) {
        ans += 0.03 * 36000;
    }

    if (36000 <= n && n < 144000) {
        ans += 0.1 * (n - 36000);
    } else if (n >= 144000) {
        ans += 0.1 * (144000 - 36000);
    }

    if (144000 <= n && n < 300000) {
        ans += 0.2 * (n - 144000);
    } else if (n >= 300000) {
        ans += 0.2 * (300000 - 144000);
    }

    if (300000 <= n && n < 420000) {
        ans += 0.25 * (n - 300000);
    } else if (n >= 420000) {
        ans += 0.25 * (420000 - 300000);
    }

    if (420000 <= n && n < 660000) {
        ans += 0.3 * (n - 420000);
    } else if (n >= 660000) {
        ans += 0.3 * (660000 - 420000);
    }

    if (660000 <= n && n < 960000) {
        ans += 0.35 * (n - 660000);
    } else if (n >= 960000) {
        ans += 0.35 * (960000 - 660000);
    }

    if (960000 <= n) {
        ans += 0.45 * (n - 960000);
    }

    printf("%.2lf\n", ans);

    return 0;
}
