#include <stdio.h>

int main() {
    int m, n;

    scanf("%d%d", &m, &n);

    for (int i = 1; i <= m; i++) {
        int x, sum = 0;

        for (int j = 1; j <= n; j++) {
            scanf("%d", &x);

            sum += x;
        }

        printf("%d\n", sum);
    }

    return 0;
}
