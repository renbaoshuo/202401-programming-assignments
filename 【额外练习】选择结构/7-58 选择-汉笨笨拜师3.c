#include <stdio.h>
#include <string.h>

char a[3], b[3];

int main() {
    scanf("%s%s", a, b);

    if (a[0] == 'J') {
        strcpy(a, "11");
    } else if (a[0] == 'Q') {
        strcpy(a, "12");
    } else if (a[0] == 'K') {
        strcpy(a, "13");
    } else if (a[0] == 'A') {
        strcpy(a, "14");
    } else if (a[0] == '2') {
        strcpy(a, "15");
    }

    if (b[0] == 'J') {
        strcpy(b, "11");
    } else if (b[0] == 'Q') {
        strcpy(b, "12");
    } else if (b[0] == 'K') {
        strcpy(b, "13");
    } else if (b[0] == 'A') {
        strcpy(b, "14");
    } else if (b[0] == '2') {
        strcpy(b, "15");
    }

    int a1 = a[0] - '0', a2 = a[1] - '0';
    int b1 = b[0] - '0', b2 = b[1] - '0';

    int a0 = a2 * 10 + a1;
    int b0 = b2 * 10 + b1;

    if (a0 == b0) {
        printf("No winner\n");
    } else if (a0 > b0) {
        printf("Alice win\n");
    } else {  // a0 < b0
        printf("Bob win\n");
    }

    return 0;
}
