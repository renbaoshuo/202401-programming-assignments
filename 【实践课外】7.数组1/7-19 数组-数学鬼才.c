#include <stdio.h>

int main() {
    int q;

    scanf("%d", &q);

    while (q--) {
        long long n;

        scanf("%lld", &n);

        if (n >= 2018) {
            printf("0\n");
        } else {
            int ans = 1;

            for (int i = 1; i <= n; i++) {
                ans = (long long)ans * i % 2018;
            }

            printf("%d\n", ans);
        }
    }

    return 0;
}
