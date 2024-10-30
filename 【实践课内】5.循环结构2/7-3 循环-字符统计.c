#include <stdio.h>

int main() {
    int sum_alpha = 0, sum_digit = 0, sum_space = 0, sum_other = 0;
    char c;

    while (scanf("%c", &c) != EOF && c != '\n') {
        if (('A' <= c && c <= 'Z') || ('a' <= c && c <= ' z')) {  // isalpha(c)
            sum_alpha++;
        } else if ('0' <= c && c <= '9') {  // isdigit(c)
            sum_digit++;
        } else if (c == ' ') {
            sum_space++;
        } else {
            sum_other++;
        }
    }

    printf("%d %d %d %d\n", sum_alpha, sum_space, sum_digit, sum_other);

    return 0;
}
