#include <stdio.h>

int a, t, b;

int main() {
    scanf("%d%d%d", &a, &t, &b);

    printf("%d", 1ll * t * (b - 1) / (a - 1));

    return 0;
}
