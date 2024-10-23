#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;

    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);

    int d1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    int d2 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
    int d3 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);

    if (d1 + d2 == d3) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
