#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if (x <= 1) {
        printf("No\n");
    } else {
        int is_prime = 1;

        for (int i = 2; i <= x / i; i++) {
            if (x % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
