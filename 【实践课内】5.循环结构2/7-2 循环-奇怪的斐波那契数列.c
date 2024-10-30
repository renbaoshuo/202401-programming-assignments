#include <stdio.h>

int main() {
    int n, f,
        f_pre2 = 7, f_pre1 = 11;

    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        f = (f_pre1 + f_pre2) % 3;
        f_pre2 = f_pre1;
        f_pre1 = f;
    }

    if (f == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
