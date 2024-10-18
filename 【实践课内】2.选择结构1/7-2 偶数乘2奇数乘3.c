#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if (x % 2 == 0) {
        x *= 2;
    } else {
        x *= 3;
    }

    printf("y=%d\n", x);

    return 0;
}
