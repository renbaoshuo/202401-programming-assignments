#include <stdio.h>

int main() {
    int n, sum = 0, max_level;

    scanf("%d", &n);

    // 计算可以摆出的最大金字塔层数
    for (max_level = 1; sum + max_level <= n; max_level++) {
        sum += max_level;
    }

    max_level--;  // 循环结束时 i 多加了一次

    // 自顶向下
    for (int j = max_level; j >= 1; j--) {
        // 左侧的 0
        for (int k = j; k > 1; k--) {
            printf("0");
        }

        // 当前层的数字
        printf("%d", j);

        // 中间的0和当前层的数字
        for (int m = j; m < max_level; m++) {
            printf("0%d", j);
        }

        // 右侧的 0
        for (int k = j; k > 1; k--) {
            printf("0");
        }

        printf("\n");
    }

    return 0;
}
