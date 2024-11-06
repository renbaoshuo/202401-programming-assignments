#include <stdio.h>

int n, a[1005];

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0];

    for (int i = 2; i <= n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (a[i] == max) {
            count++;
        }
    }

    printf("%d %d\n", max, count);

    return 0;
}
