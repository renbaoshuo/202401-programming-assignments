#include <stdio.h>

int n, f[105] = {1, 1};

int main() {
    scanf("%d", &n);

    if (n == 1) {
        printf("1\n");
    } else {
        for (int i = 2; i <= n; i++) {
            f[i] = f[i - 1] + f[i - 2];
        }

        printf("%d\n", f[n]);
    }

    return 0;
}
