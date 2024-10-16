#include <math.h>
#include <stdio.h>

int main() {
    double money, year, rate;

    scanf("%lf%lf%lf", &money, &year, &rate);

    double k = pow(rate + 1, year);

    printf("interest = %.2lf\n", money * k - money);

    return 0;
}
