#include <stdio.h>
#include <string.h>

char s[100];

int main() {
    gets(s);

    int len = strlen(s);

    for (int i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }

    printf("\n");

    return 0;
}
