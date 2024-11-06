#include <stdio.h>

int n, a[20];

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (a[i] < a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
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
