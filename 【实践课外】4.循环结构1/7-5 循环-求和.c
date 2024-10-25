#include <stdio.h>

int main() {
    int m, n, s1 = 0, s2 = 0;

    scanf("%d%d", &m, &n);

    for (int i = m; i <= n; i++) {
        if (i % 2 == 1) {
            s1 += i * i;
        } else {  // i % 2 == 0
            s2 += i * i * i;
        }
    }

    printf("%d %d\n", s1, s2);

    return 0;
}
