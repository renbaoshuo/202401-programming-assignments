#include <stdio.h>

int gcd(int x, int y) {
    if (x == 0) return y;
    return gcd(y % x, x);
}

int lcm(int x, int y) {
    return x / gcd(x, y) * y;
}

int main() {
    int m, n;

    scanf("%d%d", &m, &n);

    printf("%d %d\n", gcd(m, n), lcm(m, n));

    return 0;
}
