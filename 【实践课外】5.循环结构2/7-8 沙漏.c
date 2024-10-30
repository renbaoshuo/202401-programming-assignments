#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    // 上半部分
    for (int i = n * 2 - 1; i >= 1; i -= 2) {
        // 空格
        for (int j = 1; j <= (n * 2 - 1 - i) / 2; j++) {
            printf(" ");
        }

        // 沙漏主体
        for (int j = 1; j <= i; j++) {
            printf("#");
        }

        printf("\n");
    }

    // 下半部分
    for (int i = 3; i <= n * 2 - 1; i+= 2) {
        // 空格
        for (int j = 1; j <= (n * 2 - 1 - i) / 2; j++) {
            printf(" ");
        }

        // 沙漏主体
        for (int j = 1; j <= i; j++) {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
