#include <stdio.h>

int main() {
    int n, k, ans = 0;

    scanf("%d%d", &n, &k);

    for (int i = 1; i <= n; i++) {
        int tmp = 1;

        for (int j = 1; j <= k; j++) {
            tmp = tmp * i % 114514;
        }

        ans = (ans + tmp) % 114514;
    }

    printf("%d\n", ans);

    return 0;
}
