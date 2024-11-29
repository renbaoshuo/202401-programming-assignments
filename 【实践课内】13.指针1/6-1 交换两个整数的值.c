void fun(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
