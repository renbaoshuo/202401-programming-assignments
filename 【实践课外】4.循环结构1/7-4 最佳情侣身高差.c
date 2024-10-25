#include <stdio.h>

int main() {
    int n;

    scanf("%d\n", &n);

    for (int i = 1; i <= n; i++) {
        char c;
        double h;

        scanf("%c %lf\n", &c, &h);

        if (c == 'M') {
            printf("%.2lf\n", h / 1.09);
        } else {  // c == 'F'
            printf("%.2lf\n", h * 1.09);
        }
    }

    return 0;
}
