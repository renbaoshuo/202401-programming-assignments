#include <math.h>
#include <stdio.h>

int main() {
    double x, y;

    scanf("%lf%lf", &x, &y);

    if (x <= 0 && y >= 0 || x <= y && y <= 0) {
        printf("\\^O^/\n");
    } else if (x > y && y <= 0) {  //  类似 -0.5 -0.75 的情况
        printf("1\n");
    } else {
        printf("%d\n", (int)ceil(y / x));
    }

    return 0;
}
