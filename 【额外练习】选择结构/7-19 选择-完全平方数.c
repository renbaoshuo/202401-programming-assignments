#include <math.h>
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int m = sqrt(n);

    if (m * m == n) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
