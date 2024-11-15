#include <stdio.h>

const char REPLACE_MAP[] = "ZYXWVUTSRQPONMLKJIHGFEDCBA";

char s[100];

int main() {
    gets(s);

    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            printf("%c", REPLACE_MAP[s[i] - 'A']);
        } else {
            printf("%c", s[i]);
        }
    }

    printf("\n");

    return 0;
}
