#include <stdio.h>

int main() {
    double a3, a2, a1, a0, a, b, ans = 0;

    scanf("%lf%lf%lf%lf%lf%lf", &a3, &a2, &a1, &a0, &a, &b);

    while (b - a > 1e-4) {
        double mid = (a + b) / 2;
        double f_a = a3 * a * a * a + a2 * a * a + a1 * a + a0;
        double f_mid = a3 * mid * mid * mid + a2 * mid * mid + a1 * mid + a0;
        double f_b = a3 * b * b * b + a2 * b * b + a1 * b + a0;

        ans = mid;

        if (-1e-4 < f_mid && f_mid < 1e-4) {  // 近似地认为 f(mid) == 0
            break;
        } else if (f_a * f_mid > 0) {  // 在 (mid, b) 中
            a = mid;
        } else {  // 在 (a, mid) 中
            b = mid;
        }
    }

    printf("%.2lf\n", ans);

    return 0;
}
