#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int a = 1;

    for (int i = n; i > 2; i--) {
        a = (a + 1) * 2;
    }

    printf("%d\n", a);

    return 0;
}
