#include <stdio.h>

int main() {
    double a, b;

    scanf("%lf%lf", &a, &b);

    if (a > b) {
        printf("%.3lf %.3lf\n", a, b);
    } else {
        printf("%.3lf %.3lf\n", b, a);
    }

    return 0;
}
