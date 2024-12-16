#include <stdio.h>

int main() {
    int x, flag = 0;

    while (scanf("%d", &x) != EOF && x != -1) {
        if (x % 2 == 1) {
            if (flag == 1) {
                printf(" ");
            } else {
                flag = 1;
            }

            printf("%d", x);
        }
    }

    printf("\n");

    return 0;
}
