#include <math.h>
#include <stdio.h>

int main() {
    double x1, y1, x2, y2, x3, y3;

    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    double len1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double len2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    double len3 = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));

    if (len1 + len2 <= len3 || len1 + len3 <= len2 || len2 + len3 <= len1) {
        printf("Impossible\n");
    } else {
        double l = len1 + len2 + len3;
        double p = l / 2;
        double s = sqrt(p * (p - len1) * (p - len2) * (p - len3));

        printf("L = %.2lf, A = %.2lf\n", l, s);
    }

    return 0;
}
