#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if (x < 0) {
        printf("%d\n", -x);
    } else {
        printf("%d\n", x);
    }

    return 0;
}
