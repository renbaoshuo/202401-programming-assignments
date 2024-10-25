#include <stdio.h>

int main() {
    long long n;
    int ans = 0;

    scanf("%lld", &n);

    while (n != 0) {
        ans += n % 10;
        n /= 10;
    }

    printf("%d\n", ans);

    return 0;
}
