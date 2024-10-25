#include <stdio.h>

int main() {
    int x, ans = 0;

    while (scanf("%d", &x), x > 0) {
        if (x % 2 == 1) {
            ans += x;
        }
    }

    printf("%d\n", ans);

    return 0;
}
