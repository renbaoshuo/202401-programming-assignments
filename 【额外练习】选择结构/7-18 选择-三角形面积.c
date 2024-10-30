#include <stdio.h>

int main() {
    double a, b, c;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        double p = (a + b + c) / 2;
        double s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("%.2lf %.2lf\n", s, a + b + c);
    } else {
        printf("no triangle\n");
    }

    return 0;
}
