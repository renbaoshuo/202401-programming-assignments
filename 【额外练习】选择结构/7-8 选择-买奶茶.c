#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if (x == 5) {
        printf("6\n");
    } else if (x == 6) {
        printf("10\n");
    } else if (x == 7) {
        printf("8\n");
    } else {
        printf("4\n");
    }

    return 0;
}
