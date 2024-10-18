#include <stdio.h>

const double P90 = 6.95;
const double P93 = 7.44;
const double P97 = 7.93;

int main() {
    int a, b;
    char c;

    scanf("%d %d %c", &a, &b, &c);

    double ans = a;

    if (b == 90) {
        ans *= P90;
    } else if (b == 93) {
        ans *= P93;
    } else {  // b == 97
        ans *= P97;
    }

    if (c == 'm') {
        ans *= 0.95;
    } else {  // c == 'e'
        ans *= 0.97;
    }

    printf("%.2lf\n", ans);

    return 0;
}
