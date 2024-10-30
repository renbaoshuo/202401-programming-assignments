#include <stdio.h>

int main() {
    int n, sum_pos = 0, sum_neg = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int x;

        scanf("%d", &x);

        if (x > 0) {
            sum_pos += x;
        } else if (x < 0) {
            sum_neg += x;
        }  // when x == 0, do nothing
    }

    if (sum_pos == 0) {
        printf("no positive number ");
    } else {
        printf("%d ", sum_pos);
    }

    if (sum_neg == 0) {
        printf("no negative number\n");
    } else {
        printf("%d\n", sum_neg);
    }

    return 0;
}
