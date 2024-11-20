double f(int n, double a[], double x) {
    double res = 0;
    double k = 1;

    for (int i = 0; i <= n; i++) {
        res += a[i] * k;
        k *= x;
    }

    return res;
}
