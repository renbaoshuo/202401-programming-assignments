#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n >= 1 && n <= 10) {
        printf("%d\n", n);
    } else if (n == 11) {
        printf("J\n");
    } else if (n == 12) {
        printf("Q\n");
    } else if (n == 13) {
        printf("K\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
