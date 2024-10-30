#include <stdio.h>

int main() {
    int n;
    int a, b, c, d, e, f, g;

    scanf("%d", &n);

    a = n / 1000000;
    b = n / 100000 % 10;
    c = n / 10000 % 10;
    d = n / 1000 % 10;
    e = n / 100 % 10;
    f = n / 10 % 10;
    g = n % 10;

    if (a == g && b == f && c == e) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
