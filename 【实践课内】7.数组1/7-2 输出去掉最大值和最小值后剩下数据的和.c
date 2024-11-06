#include <stdio.h>

int a[10], max = -1e8, min = 1e8, sum;

int main() {
    for (int i = 1; i <= 6; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i <= 6; i++) {
        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] < min) {
            min = a[i];
        }
    }

    for (int i = 1; i <= 6; i++) {
        if (a[i] == max || a[i] == min) {
            continue;
        }

        sum += a[i];
    }

    printf("%d\n", sum);

    return 0;
}
