#include <stdio.h>

int main() {
    int n, num = 2, count = 0;

    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        num *= 2;

        int is_prime = 1;

        for (int j = 2; j * j <= num - 1; j++) {
            if ((num - 1) % j == 0) {
                is_prime = 0;

                break;
            }
        }

        if (is_prime == 1) {
            printf("%d\n", num - 1);

            count++;
        }
    }
    if (count == 0) {
        printf("None\n");
    }

    return 0;
}
