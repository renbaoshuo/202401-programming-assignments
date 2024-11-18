#include <stdio.h>

int a[7][2];
int max = 0, day = 0;

int main() {
    for (int i = 0; i < 7; i++) {
        scanf("%d %d", &a[i][0], &a[i][1]);

        if (a[i][0] + a[i][1] > 8 && a[i][0] + a[i][1] > max) {
            max = a[i][0] + a[i][1];
            day = i + 1;
        }
    }

    printf("%d\n", day);

    return 0;
}
