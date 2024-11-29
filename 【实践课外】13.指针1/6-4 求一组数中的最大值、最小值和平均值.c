float fun(int a[], int n, int *max, int *min) {
    float sum = a[0];

    *max = a[0];
    *min = a[0];

    for (int i = 1; i < n; i++) {
        sum += a[i];

        if (a[i] > *max) {
            *max = a[i];
        }

        if (a[i] < *min) {
            *min = a[i];
        }
    }

    return sum / n;
}
