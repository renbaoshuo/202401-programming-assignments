#include <stdio.h>

int n, k, tag_count[1005], max, max_id;

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &k);

        for (int j = 1; j <= k; j++) {
            int x;

            scanf("%d", &x);

            tag_count[x]++;
        }
    }

    for (int i = 1; i <= 1000; i++) {
        if (tag_count[i] >= max) {
            max = tag_count[i];
            max_id = i;
        }
    }

    printf("%d %d\n", max_id, max);

    return 0;
}
