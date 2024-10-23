#include <stdio.h>

int main() {
    int a, b, c, d, e;
    int ans_odd = 0, ans_even = 0;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a % 2 == 0) {
        ans_even += a * a;
    } else {
        ans_odd += a * a;
    }

    if (b % 2 == 0) {
        ans_even += b * b;
    } else {
        ans_odd += b * b;
    }

    if (c % 2 == 0) {
        ans_even += c * c;
    } else {
        ans_odd += c * c;
    }

    if (d % 2 == 0) {
        ans_even += d * d;
    } else {
        ans_odd += d * d;
    }

    if (e % 2 == 0) {
        ans_even += e * e;
    } else {
        ans_odd += e * e;
    }

    if (ans_odd == 0) {
        printf("No Odd Number\n");
    } else {
        printf("%d\n", ans_odd);
    }

    if (ans_even == 0) {
        printf("No Even Number\n");
    } else {
        printf("%d\n", ans_even);
    }

    return 0;
}
