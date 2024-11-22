void hollowPyramid(int n) {
    if (n == 1) {
        printf("1\n");

        return;
    }

    for (int i = 1; i < n; i++) {
        printf(" ");
    }

    printf("%d\n", 1);

    for (int i = 2; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        printf("%d", i);

        for (int j = 1; j <= (i - 1) * 2 - 1; j++) {
            printf(" ");
        }

        printf("%d\n", i);
    }

    for (int i = 1; i < n * 2; i++) {
        printf("%d", n);
    }

    printf("\n");
}
