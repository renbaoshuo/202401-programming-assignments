#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is an even number\n", n);
    } else if (n % 3 == 0) {
        printf("%d is an odd number,it can be divided by 3\n", n);
    } else {
        printf("%d is an odd number,it can't be divided by 3\n", n);
    }

    return 0;
}
