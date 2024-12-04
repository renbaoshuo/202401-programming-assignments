#include <stdio.h>
#include <string.h>

const char *reverse(char *s) {
    int len = strlen(s);

    for (int i = 0; i < len / 2; i++) {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }

    return s;
}

int main() {
    char s[25];

    while (scanf("%s", s) != EOF) {
        printf("%s ", reverse(s));
    }

    return 0;
}
