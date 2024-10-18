#include <stdio.h>

int main() {
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    if (op == '+') {
        printf("%d\n", a + b);
    } else if (op == '-') {
        printf("%d\n", a - b);
    } else if (op == '*') {
        printf("%d\n", a * b);
    } else if (op == '/' && b != 0) {
        printf("%.2lf\n", (double)a / b);
    } else if (op == '%' && b != 0) {
        printf("%d\n", a % b);
    } else {
        printf("Error\n");
    }

    return 0;
}
