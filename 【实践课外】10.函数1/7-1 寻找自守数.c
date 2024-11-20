#include <stdio.h>

int get_digits(int x) {
    int res = 0;

    while (x) {
        x /= 10;
        res++;
    }

    return res;
}

int get_pow(int x, int n) {
    int res = 1;

    for (int i = 1; i <= n; i++) {
        res *= x;
    }

    return res;
}

int check(int x) {
    int pow = x * x;
    int digits = get_digits(pow);

    for (int i = 0; i <= digits; i++) {
        if (x == pow % get_pow(10, i)) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int a, b, cnt = 0;

    scanf("%d%d", &a, &b);

    for (int i = a; i <= b; i++) {
        if (check(i)) {
            printf("%d\n", i);
            cnt++;
        }
    }

    if (cnt == 0) {
        printf("None\n");
    }

    return 0;
}
