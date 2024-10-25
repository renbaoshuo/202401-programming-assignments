#include <stdio.h>

int main() {
    int n, min = 2147483647;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x;

        scanf("%d", &x);

        if (x < min) {
            min = x;
        }
    }

    printf("%d\n", min);

    return 0;
}
