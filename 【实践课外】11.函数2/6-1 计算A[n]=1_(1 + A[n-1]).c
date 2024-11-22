float fun(int n) {
    if (n == 1) return 1;
    return 1.0 / (1.0 + fun(n - 1));
}
