#include <stdio.h>

int main() {
    int n, m;

    scanf("%d%d", &n, &m);

    int result = 0, factor = 1;

    while (n) {
        result += (n % m) * factor;
        n /= m;
        factor *= 10;
    }

    printf("%d\n", result);

    return 0;
}
