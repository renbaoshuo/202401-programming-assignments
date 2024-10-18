#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int d = n % 5;

    if (1 <= d && d <= 3) {
        printf("Fishing in day %d\n", n);
    } else {
        printf("Drying in day %d\n", n);
    }

    return 0;
}
