#include <stdio.h>

int main() {
    double a;

    scanf("%lf", &a);

    if (a >= 0 && (int)a == a) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
