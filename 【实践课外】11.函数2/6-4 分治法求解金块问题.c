int max(int a[], int m, int n) {
    if (m == n) {
        return a[m];
    }

    int mid = (m + n) / 2;

    int left_max = max(a, m, mid);
    int right_max = max(a, mid + 1, n);

    return left_max > right_max ? left_max : right_max;
}

int min(int a[], int m, int n) {
    if (m == n) {
        return a[m];
    }

    int mid = (m + n) / 2;

    int left_min = min(a, m, mid);
    int right_min = min(a, mid + 1, n);

    return left_min < right_min ? left_min : right_min;
}
