#include <stdio.h>

int main() {
    int y, m, d;

    scanf("%2d-%2d-%4d", &m, &d, &y);

    printf("%04d-%02d-%02d\n", y, m, d);

    return 0;
}
