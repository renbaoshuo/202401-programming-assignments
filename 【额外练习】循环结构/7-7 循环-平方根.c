#include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);

        if (n >= 1000) {
            break;
        }
    }

    int i = 0;
    while (i * i <= n) {
        i++;
    }

    printf("%d\n", i - 1);

    return 0;
}
