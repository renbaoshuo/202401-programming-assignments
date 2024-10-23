#include <stdio.h>

int main() {
    int y, m, d;

    scanf("%4d/%2d/%2d", &y, &m, &d);

    if (m < 1 || m > 12 || d < 1) {
        printf("No\n");
    } else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if (d <= 31) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    } else if (m == 2) {
        if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
            if (d <= 29) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        } else {
            if (d <= 28) {
                printf("Yes\n");
            } else {
                printf("No\n");
            }
        }
    } else {  // m == 4 || m == 6 || m == 9 || m == 11
        if (d <= 30) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
