#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int a = n / 100;
    int b = n / 10 % 10;
    int c = n % 10;

    if (n == a * a * a + b * b * b + c * c * c) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
