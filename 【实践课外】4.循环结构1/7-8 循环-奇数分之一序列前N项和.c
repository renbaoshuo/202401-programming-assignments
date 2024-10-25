#include <stdio.h>

int main() {
    int n;
    double ans = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        ans += 1.0 / (i * 2 + 1);
    }

    printf("%.2lf\n", ans);

    return 0;
}
