#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    double a = 2, b = 1, sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += a / b;
        double temp = a;
        a = a + b;
        b = temp;
    }

    printf("%.6lf\n", sum);

    return 0;
}
