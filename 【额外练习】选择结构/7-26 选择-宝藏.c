#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    int canFill = 0;

    for (int a = 0; a <= x / 4; a++) {
        for (int b = 0; b <= x / 5; b++) {
            for (int c = 0; c <= x / 7; c++) {
                // 计算当前组合的体积
                if (4 * a + 5 * b + 7 * c == x) {
                    canFill = 1;
                    break;
                }
            }
            if (canFill) break;
        }
        if (canFill) break;
    }

    if (canFill) {
        printf("ni bu yao guo lai a!\n");
    } else {
        printf("What a lucky day!\n");
    }

    return 0;
}
