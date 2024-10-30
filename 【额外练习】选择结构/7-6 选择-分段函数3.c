#include <math.h>
#include <stdio.h>

int main() {
    double x;

    scanf("%lf", &x);

    if (x < 1) {
        printf("%.3lf\n", x);
    } else if (1 <= x && x < 10) {
        printf("%.3lf\n", sqrt(x * 2 - 1));
    } else {  // x >= 10
        printf("%.3lf\n", log(x * 3 - 11));
    }

    return 0;
}
