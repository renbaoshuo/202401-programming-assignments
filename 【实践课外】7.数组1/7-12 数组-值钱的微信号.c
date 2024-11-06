#include <stdio.h>

int n, k, a[55], ans;

int main() {
    scanf("%d%d", &k, &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            if (a[j] < a[j - 1]) {
                int t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (k > a[i]) {
            k -= a[i];
            ans++;
        }
    }

    printf("%d\n", ans);

    return 0;
}
