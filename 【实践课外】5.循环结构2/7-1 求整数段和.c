#include <stdio.h>

int main() {
    int a, b, sum = 0;

    scanf("%d %d", &a, &b);

    for (int i = 0; i < (b - a + 1); i++) {
        printf("%5d", a + i);

        sum += a + i;

        if (i % 5 == 4) {
            printf("\n");
        }
    }

    if ((b - a) % 5 != 4) {
        printf("\n");
    }

    printf("Sum = %d\n", sum);

    return 0;
}
