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

    for (int i = 0; i < n; i++) {
        res *= x;
    }

    return res;
}

int narcissistic(int number) {
    int sum = 0;
    int tmp = number;
    int digits = get_digits(number);

    while (tmp) {
        sum += get_pow(tmp % 10, digits);
        tmp /= 10;
    }

    return sum == number;
}

void PrintN(int m, int n) {
    for (int i = m + 1; i <= n - 1; i++) {
        if (narcissistic(i)) {
            printf("%d\n", i);
        }
    }
}
