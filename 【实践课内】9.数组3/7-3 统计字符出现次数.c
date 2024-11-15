#include <stdio.h>

char c, s[100];

int main() {
    gets(s);
    scanf("%c", &c);

    int len = strlen(s);
    int cnt = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == c) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
