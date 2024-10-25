#include <stdio.h>

int main() {
    int n, count = 0, sum_score = 0;

    scanf("%d", &n);

    if (n == 0) {
        printf("average = 0.0\ncount = 0\n");
    } else {
        for (int i = 1; i <= n; i++) {
            int score;

            scanf("%d", &score);

            sum_score += score;

            if (score >= 60) {
                count++;
            }
        }

        printf("average = %.1lf\ncount = %d\n", (double)sum_score / n, count);
    }

    return 0;
}
