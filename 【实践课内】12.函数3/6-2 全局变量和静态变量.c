// int max=0,min=9999999,total=0;

int fun() {
    int x;
    static int cnt = 0;

    while (scanf("%d", &x) != EOF && x != -1) {
        total += x;

        if (x > max) {
            max = x;
        }

        if (x < min) {
            min = x;
        }

        cnt++;
    }

    return cnt;
}
