#include <stdio.h>
#include <string.h>

int n;
char s[1005];

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%s", s);

        int flag = 1;

        // check is palindrome
        for (int j = 0; j < strlen(s) / 2; j++) {
            if (s[j] != s[strlen(s) - j - 1]) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            printf("%s\n", s);
        }
    }

    return 0;
}
