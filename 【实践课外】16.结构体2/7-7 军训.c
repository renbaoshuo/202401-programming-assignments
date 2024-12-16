#include <stdio.h>
#include <stdlib.h>

void train_soldiers(int n) {
    int *soldiers = (int *)malloc(n * sizeof(int));
    int remaining = n;
    int step = 2;

    for (int i = 0; i < n; i++) {
        soldiers[i] = i + 1;
    }

    while (remaining > 3) {
        int index = 0;

        for (int i = 0; i < remaining; i++) {
            if ((i + 1) % step != 0) {
                soldiers[index++] = soldiers[i];
            }
        }

        remaining = index;
        step = (step == 2) ? 3 : 2;
    }

    for (int i = 0; i < remaining; i++) {
        printf("%d", soldiers[i]);

        if (i < remaining - 1) {
            printf(" ");
        }
    }

    printf("\n");

    free(soldiers);
}

int main() {
    int t;

    scanf("%d", &t);

    while (t--) {
        int n;

        scanf("%d", &n);

        train_soldiers(n);
    }

    return 0;
}
