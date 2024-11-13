#include <stdio.h>

int t, n, mat[15][15];

int main() {
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                scanf("%d", &mat[i][j]);
            }
        }

        int flag = 1;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j < i; j++) {
                if (mat[i][j] != 0) {
                    flag = 0;
                }
            }
        }

        if (flag) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
