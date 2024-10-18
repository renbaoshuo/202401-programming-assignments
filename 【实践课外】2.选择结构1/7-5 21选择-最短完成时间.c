#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int ans1 = n * 7;
    int ans2 = 15 + n * 5;

    if (ans1 < ans2) {
        printf("%d\n", ans1);
    } else {
        printf("%d\n", ans2);
    }

    return 0;
}
