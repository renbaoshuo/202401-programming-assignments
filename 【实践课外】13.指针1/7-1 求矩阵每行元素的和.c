#include <stdio.h>

int row_sum(int *a, int n) {
    int s = 0;

    for (int i = 0; i < n; i++) {
        s += a[i];
    }

    return s;
}

void mat_sum(int mat[][10], int n, int m, int *sum) {
    for (int i = 0; i < n; i++) {
        sum[i] = row_sum(mat[i], m);
    }
}

int main() {
    int n, m, mat[10][10], sum[10];

    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    mat_sum(mat, n, m, sum);

    for (int i = 0; i < n; i++) {
        printf("%d\n", sum[i]);
    }

    return 0;
}
