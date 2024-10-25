#include <stdio.h>

int main() {
    int m, n, ans = 0;

    scanf("%d%d", &m, &n);

    for (int i = m; i <= n; i++) {
        ans += i;
    }

    printf("%d\n", ans);

    return 0;
}
