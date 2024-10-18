#include <math.h>
#include <stdio.h>

double no_neg_zero(double x) {
    return x == -0.0 ? 0.0 : x;
}

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0 && b == 0) {
        if (c == 0) {
            printf("Zero Equation\n");
        } else {
            printf("Not An Equation\n");
        }
    } else if (a == 0) {
        double x = -c / b;

        printf("%.2lf\n", no_neg_zero(x));
    } else {
        double delta = b * b - 4.0 * a * c;

        if (delta > 0) {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);

            printf("%.2lf\n%.2lf\n", no_neg_zero(x1), no_neg_zero(x2));
        } else if (delta == 0) {
            double x = -b / (2 * a);

            printf("%.2lf\n", no_neg_zero(x));
        } else if (delta < 0) {
            double real = -b / (2 * a);
            double imag = sqrt(-delta) / (2 * a);

            printf("%.2lf+%.2lfi\n%.2lf-%.2lfi\n", no_neg_zero(real), no_neg_zero(imag), no_neg_zero(real), no_neg_zero(imag));
        }
    }

    return 0;
}
