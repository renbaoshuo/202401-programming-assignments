#include <stdio.h>

int main() {
    int n, count = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int x;

        scanf("%d", &x);

        if (x % 4 == 0) count++;
    }

    printf("%d\n", count);

    return 0;
}
