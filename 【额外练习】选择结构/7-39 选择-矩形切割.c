#include <stdio.h>

int main() {
    double a, b, m, n;

    scanf("%lf%lf%lf%lf", &a, &b, &m, &n);

    if (m == a && n == b) {
        printf("3\n");
    } else if (m == a || n == b) {
        printf("4\n");
    } else {
        printf("5\n");
    }

    return 0;
}
