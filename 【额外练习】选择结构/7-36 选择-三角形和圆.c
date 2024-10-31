#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c, r;

    scanf("%lf%lf%lf%lf", &a, &b, &c, &r);

    double s = (a + b + c) / 2.0;

    if (s <= a || s <= b || s <= c) {
        printf("No\n");
        return 0;
    }

    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    double inRadius = area / s;

    if (r <= inRadius) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
