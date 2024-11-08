#include <math.h>
#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    double a, b, c, s, area;

    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);

    a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));

    if (a + b > c && a + c > b && b + c > a) {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("%.1f %.1f\n", a + b + c, area);
    } else {
        printf("no triangle!\n");
    }

    return 0;
}
