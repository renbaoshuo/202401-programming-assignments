#include <stdio.h>

int main() {
    int a, n, sum = 0;

    scanf("%d%d", &a, &n);

    for (int i = 1; i <= n; i++) {
        int x = 0;

        for (int j = 0; j < i; j++) {
            x = x * 10 + a;
        }

        sum += x;
    }

    printf("%d\n", sum);

    return 0;
}
