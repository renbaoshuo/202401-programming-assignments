#include <stdio.h>
#include <string.h>

int cnt[256];
char s[100];

int main() {
    gets(s);

    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        cnt[s[i]]++;
    }

    for (char i = 32; i <= 126; i++) {
        if (cnt[i] > 0) {
            printf("%c", i);
        }
    }

    printf("\n");

    return 0;
}
