#include <stdio.h>

int main() {
    int n, m;

    scanf("%d%d", &n, &m);

    if (n >= m + 1 && n % (m + 1) == 0) {
        printf("Second win\n");
    } else {
        printf("First win\n");
    }

    return 0;
}
