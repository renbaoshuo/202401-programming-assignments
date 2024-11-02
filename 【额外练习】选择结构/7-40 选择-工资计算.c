#include <stdio.h>

int main() {
    int year;
    double time;

    scanf("%d%lf", &year, &time);

    if (year >= 5) {
        if (time <= 40) {
            printf("%.2lf\n", time * 50);
        } else {
            printf("%.2lf\n", 40 * 50 + (time - 40) * 50 * 1.5);
        }
    } else {
        if (time <= 40) {
            printf("%.2lf\n", time * 30);
        } else {
            printf("%.2lf\n", 40 * 30 + (time - 40) * 30 * 1.5);
        }
    }

    return 0;
}
