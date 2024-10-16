#include <stdio.h>

int x;

int main() {
    scanf("%d", &x);

    int res = 0;

    while (x) {
        res = (res * 10) + (x % 10);
        x /= 10;
    }

    printf("%d\n", res);
    
    return 0;
}
