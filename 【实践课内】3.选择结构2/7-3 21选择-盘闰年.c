#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    // 判断闰年
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
        // 判断是否含 4
        if (n % 10 == 4 || n / 10 % 10 == 4 || n / 100 % 10 == 4 || n / 1000 % 10 == 4) {
            printf("panta!\n");
        } else {
            printf("1\n");
        }
    } else {
        printf("0\n");
    }

    return 0;
}
