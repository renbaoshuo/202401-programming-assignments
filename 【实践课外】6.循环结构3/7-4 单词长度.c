#include <stdio.h>

int main() {
    char c;
    int count = 0;
    int printed = 0;

    while (scanf("%c", &c) != EOF, c != '.') {
        if (c == ' ') {
            if (count != 0) {
                if (printed == 0) {
                    printf("%d", count);

                    printed = 1;
                } else {
                    printf(" %d", count);
                }
            }

            count = 0;
        } else {
            count++;
        }
    }

    if (count != 0) {
        if (printed == 0) {
            printf("%d", count);

            printed = 1;
        } else {
            printf(" %d", count);
        }
    }

    printf("\n");

    return 0;
}
