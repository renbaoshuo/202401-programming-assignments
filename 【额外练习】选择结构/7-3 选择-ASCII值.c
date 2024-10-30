#include <stdio.h>

int main() {
    char c;

    scanf("%c", &c);

    if ('0' <= c && c <= '9') {
        printf("%d\n", c);
    } else {
        printf("input error\n");
    }

    return 0;
}
