#include <stdio.h>

int main() {
    int num, n, finished = 0;

    scanf("%d%d", &num, &n);

    for (int i = 1; i <= n; i++) {
        int x;

        scanf("%d", &x);

        if (x < 0) {
            printf("Game Over\n");

            finished = 1;
            break;
        } else if (x == num) {
            if (i == 1) {
                printf("Bingo!\n");
            } else if (i <= 3) {
                printf("Lucky You!\n");
            } else {
                printf("Good Guess!\n");
            }

            finished = 1;

            break;
        } else if (x < num) {
            printf("Too small\n");
        } else {  // x > num
            printf("Too big\n");
        }
    }

    if (finished == 0) {
        printf("Game Over\n");
    }

    return 0;
}
