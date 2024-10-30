#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c) {
        printf("bian\n");
    } else if (a == b || b == c || a == c) {
        printf("yao\n");
    } else {
        printf("triangle\n");
    }

    return 0;
}
