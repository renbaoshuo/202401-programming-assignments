int cmp(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

void bubble(int a[], int n) {
    qsort(a, n, sizeof(int), cmp);
}
