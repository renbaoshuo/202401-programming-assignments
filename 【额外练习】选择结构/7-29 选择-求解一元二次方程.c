#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c;

    scanf("%lf%lf%lf", &a, &b, &c);

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b - sqrt(delta)) / (a * 2);
        double x2 = (-b + sqrt(delta)) / (a * 2);

        if (x1 > x2) {
            double temp = x1;
            x1 = x2;
            x2 = temp;
        }

        printf("%.2lf %.2lf\n", x1, x2);
    } else if (delta == 0) {
        double x1 = -b / (a * 2);

        printf("%.2lf\n", x1);
    } else {
        printf("No solution\n");
    }

    return 0;
}
