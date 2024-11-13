#include <stdio.h>

int n, mat[15][15];

int main() {
    scanf("%d", &n);

    int x = 1, y = 1, dx = 0, dy = 1;

    for (int i = 1; i <= n * n; i++) {
        mat[x][y] = i;

        if (x + dx > n || x + dx < 1 || y + dy > n || y + dy < 1 || mat[x + dx][y + dy]) {
            int tmp = dx;
            dx = dy;
            dy = -tmp;
        }

        x += dx;
        y += dy;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%3d", mat[i][j]);
        }

        printf("\n");
    }

    return 0;
}
