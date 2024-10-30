#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if (x <= 800) {
        printf("0.0\n");
    } else if (x <= 4000) {
        printf("%.1lf\n", (x - 800) * 0.15);
    } else {
        printf("%.1lf\n", x * 0.1);
    }

    return 0;
}
