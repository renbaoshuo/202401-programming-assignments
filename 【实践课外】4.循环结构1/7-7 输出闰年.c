#include <stdio.h>

int main() {
    int year;

    scanf("%d", &year);

    if (2000 < year && year <= 2100) {
        int count = 0;

        for (int i = 2001; i <= year; i++) {
            if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
                printf("%d\n", i);

                count++;
            }
        }

        if (count == 0) {
            printf("None\n");
        }
    } else {
        printf("Invalid year!\n");
    }

    return 0;
}
