#include <stdio.h>

int main() {
    int x, a, b, c;

    scanf("%d%d%d%d", &x, &a, &b, &c);

    switch (x) {
        case 0:
            printf("%d", a + b);
            break;

        case 1:
            printf("%d", a - b);
            break;

        case 2:
            printf("%d", a * b);
            break;

        case 3:
            printf("%d", a / b);
            break;

        case 4:
            printf("%d", a % b);
            break;

        case 5:
            printf("%d", a ? b : c);
            break;

        case 6:
            printf("%d", a > b);
            break;

        case 7:
            printf("%d", a < b);
            break;

        case 8:
            printf("%d", a != b);
            break;

        case 9:
            printf("%d", a == b);
            break;
    }

    return 0;
}
