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

int fun(int w) {
    int n = get_digits(w);

    return w % get_pow(10, n - 1);
}
