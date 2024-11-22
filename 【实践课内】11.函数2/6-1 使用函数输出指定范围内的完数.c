int factorsum(int number) {
    int sum = 0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum;
}

void print(int x) {
    int cnt = 0;

    printf("%d = ", x);

    for (int i = 1; i < x; i++) {
        if (x % i == 0) {
            if (cnt++ != 0) {
                printf(" + ");
            }

            printf("%d", i);
        }
    }

    printf("\n");
}

void PrintPN(int m, int n) {
    int cnt = 0;

    for (int i = m; i <= n; i++) {
        if (factorsum(i) == i) {
            print(i);
            cnt++;
        }
    }

    if (cnt == 0) {
        printf("No perfect number\n");
    }
}
