#include <stdio.h>

const int DAYS[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

int main() {
    int y, m, d;

    scanf("%4d/%2d/%2d", &y, &m, &d);

    int days = 0;

    for (int i = 1; i < m; i++) {
        days += DAYS[i];

        if (i == 2) {  // 2 月涉及到闰年
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
                days++;
            }
        }
    }

    days += d;

    printf("%d\n", days);

    return 0;
}
