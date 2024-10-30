#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("8\n");
            break;

        case 2:
            printf("4.5\n");
            break;

        case 3:
            printf("12.8\n");
            break;

        case 4:
            printf("3\n");
            break;

        default:
            printf("Exit\n");
            break;
    }

    return 0;
}
