#include <stdio.h>

int f[20] = {0, 1};

int main() {
    for (int i = 2; i < 20; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }

    for (int i = 1; i <= 12; i++) {
        printf("%6d", f[i]);

        if (i % 3 == 0) {
            printf("\n");
        }
    }

    return 0;
}
