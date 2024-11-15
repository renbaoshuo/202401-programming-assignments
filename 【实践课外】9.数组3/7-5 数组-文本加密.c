#include <stdio.h>
#include <string.h>

char s[2][10005];
int len0, len1;

int main() {
    while (s[0][len0] = getchar(), s[0][len0] != ',') {
        len0++;
    }

    s[0][len0] = '\0';

    while ((s[1][len1] = getchar()) != EOF && s[1][len1] != '\n') {
        len1++;
    }

    s[1][len1] = '\0';

    for (int i = 0; s[0][i] != '\0'; i++) {
        if ('A' <= s[0][i] && s[0][i] <= 'Z') {
            s[0][i] = 'a' + s[0][i] - 'A';

            s[0][i] -= 2;

            if (s[0][i] < 'a') {
                s[0][i] += 26;
            }
        } else if ('a' <= s[0][i] && s[0][i] <= 'z') {
            s[0][i] = 'A' + s[0][i] - 'a';

            s[0][i] -= 2;

            if (s[0][i] < 'A') {
                s[0][i] += 26;
            }
        }
    }

    if (strcmp(s[0], s[1]) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
