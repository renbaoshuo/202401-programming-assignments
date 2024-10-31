#include <stdio.h>

int main() {
    double a, b, c;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0 && c != 0) {
            printf("0\n");
        } else {
            printf("1\n");
        }
    } else {
        double delta = b * b - 4 * a * c;

        if (delta > 0) {
            printf("2\n");
        } else if (delta == 0) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}
