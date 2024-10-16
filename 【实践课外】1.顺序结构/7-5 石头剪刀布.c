#include <stdio.h>

int n;
double p1, p2, p3, q1, q2, q3;

int main() {
    scanf("%d%lf%lf%lf%lf%lf%lf", &n, &p1, &p2, &p3, &q1, &q2, &q3);

    double win = p1 * q2 + p2 * q3 + p3 * q1;

    printf("%.4lf\n", win * n);

    return 0;
}
