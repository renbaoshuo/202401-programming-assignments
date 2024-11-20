int fun(int a[3][3]) {
    int res = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = i; j < 3; j++) {
            res += a[i][j];
        }
    }

    return res;
}
