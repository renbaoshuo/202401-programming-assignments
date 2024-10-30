#include <stdio.h>

int main() {
    int x, count = 0;

    scanf("%d", &x);

    for (int i = x / 5; i >= 1; i--) {
        for (int j = x / 2; j >= 1; j--) {
            for (int k = x; k >= 1; k--) {
                if (i * 5 + j * 2 + k == x) {
                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, k, i + j + k);

                    count++;
                }
            }
        }
    }

    printf("count = %d\n", count);

    return 0;
}
