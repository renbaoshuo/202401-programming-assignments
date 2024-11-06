#include <stdio.h>

int n, k, a[200];

int main() {
    scanf("%d%d", &n, &k);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= k; i++) {
        for (int j = 2; j <= n; j++) {
            if (a[j] < a[j - 1]) {
                int t = a[j];
                a[j] = a[j - 1];
                a[j - 1] = t;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i < n) {
            printf("%d ", a[i]);
        } else {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}
