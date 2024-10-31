#include <stdio.h>

int main() {
    char c;

    scanf("%c", &c);

    if (c >= 'a' && c <= 'z') {
        c += 3;
        if (c > 'z') c -= 26;
    } else if (c >= 'A' && c <= 'Z') {
        c += 3;
        if (c > 'Z') c -= 26;
    }

    printf("%c\n", c);

    return 0;
}
