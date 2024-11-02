#include <math.h>
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int x = sqrt(n);

    if (x * x == n) {
        if (x % 2 == 0) {
            printf("Even special number\n");
        } else {
            printf("Odd special number\n");
        }
    } else {
        printf("No\n");
    }

    return 0;
}
