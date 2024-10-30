#include <stdio.h>

int main() {
    int h, m;

    scanf("%d:%d", &h, &m);

    double angle = 30 * h - 5.5 * m;

    if (angle < 0) angle = -angle;
    if (angle > 180) angle = 360 - angle;

    printf("%.3lf\n", angle);

    return 0;
}
