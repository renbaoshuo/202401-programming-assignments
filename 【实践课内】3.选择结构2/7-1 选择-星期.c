#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    n %= 7;

    if (n == 0) {
        printf("Friday\n");
    } else if (n == 1) {
        printf("Saturday\n");
    } else if (n == 2) {
        printf("Sunday\n");
    } else if (n == 3) {
        printf("Monday\n");
    } else if (n == 4) {
        printf("Tuesday\n");
    } else if (n == 5) {
        printf("Wednesday\n");
    } else if (n == 6) {
        printf("Thursday\n");
    } else {  // Wrong input
        printf("What're you doing?\n");
    }

    return 0;
}
