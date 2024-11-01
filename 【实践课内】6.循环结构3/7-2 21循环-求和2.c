#include <math.h>
#include <stdio.h>

int main() {
    long long n, ans = 0;

    scanf("%lld", &n);

    for (long long i = 1; i <= (long long)sqrt(n); i++) {
        if (n % i == 0) {
            ans += i;

            if (i != n / i) {
                ans += n / i;
            }
        }
    }

    printf("%lld\n", ans);

    return 0;
}
