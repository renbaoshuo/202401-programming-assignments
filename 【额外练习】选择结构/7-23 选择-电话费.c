#include <stdio.h>

int main() {
    int t;

    scanf("%d", &t);

    double s1 = 25 + 0.1 * t;
    double s2 = 20;

    if (t >= 100) s2 = 0.3 * t;

    if (s1 > s2) {
        printf("2\n");
    } else {
        printf("1\n");
    }

    return 0;
}
