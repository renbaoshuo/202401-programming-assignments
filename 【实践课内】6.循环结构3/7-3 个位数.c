#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    while (n >= 10) {
        int s = 0;

        while (n) {
            s += n % 10;
            n /= 10;
        }

        n = s;
    }

    printf("%d\n", n);

    return 0;
}
