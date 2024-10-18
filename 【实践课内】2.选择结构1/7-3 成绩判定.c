#include <stdio.h>

int main() {
    int x;

    scanf("%d", &x);

    if (60 <= x && x <= 100) {
        printf("Pass\n");
    } else if (0 <= x && x < 60) {
        printf("No Pass\n");
    } else {  // x < 0 || x > 100
        printf("Data Error\n");
    }

    return 0;
}
