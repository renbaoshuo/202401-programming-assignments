#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int a = n % 10;
    int b = n / 10 % 10;
    int c = n / 100 % 10;
    int d = n / 1000;

    printf("%d\n", a * 1000 + b * 100 + c * 10 + d);

    return 0;
}
