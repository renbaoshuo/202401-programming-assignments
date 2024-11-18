#include <stdio.h>

int main() {
    double a, x;

    scanf("%lf %lf", &a, &x);

    int count = 1;
    double sum = a;

    while (sum < x) {
        a *= 0.98;
        sum += a;
        count++;
    }

    printf("%d\n", count);

    return 0;
}
