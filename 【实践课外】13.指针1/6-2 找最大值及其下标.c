int fun(int *a, int *b, int n) {
    *b = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[*b]) {
            *b = i;
        }
    }

    return a[*b];
}
