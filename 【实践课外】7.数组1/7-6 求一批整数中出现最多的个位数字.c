#include <stdio.h>

int n, cnt[15];

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int x;

        scanf("%d", &x);

        if (x == 0) {
            cnt[0]++;
        } else {
            while (x) {
                cnt[x % 10]++;
                x /= 10;
            }
        }
    }

    int max = 0;

    for (int i = 0; i <= 9; i++) {
        if (cnt[i] > max) {
            max = cnt[i];
        }
    }

    int max_cnt = 0, out_cnt = 0;

    for (int i = 0; i <= 9; i++) {
        if (cnt[i] == max) {
            max_cnt++;
        }
    }

    printf("%d: ", max);

    for (int i = 0; i <= 9; i++) {
        if (cnt[i] == max) {
            out_cnt++;

            if (out_cnt < max_cnt) {
                printf("%d ", i);
            } else {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}
