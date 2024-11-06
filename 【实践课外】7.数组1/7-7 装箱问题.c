#include <stdio.h>

int n, box[1005];

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int x;

        scanf("%d", &x);

        for (int j = 1; j <= n; j++) {
            if (box[j] + x <= 100) {
                printf("%d %d\n", x, j);
                box[j] += x;
                break;
            }
        }
    }

    while (box[n] == 0) n--;

    printf("%d\n", n);

    return 0;
}
