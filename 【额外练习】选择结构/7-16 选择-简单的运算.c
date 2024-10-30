#include <math.h>
#include <stdio.h>

int main() {
    double n;

    scanf("%lf", &n);

    printf("%d %d %.5lf\n", (int)ceil(n), (int)floor(n), n);

    return 0;
}
