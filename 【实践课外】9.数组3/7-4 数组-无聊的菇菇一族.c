#include <stdio.h>
#include <string.h>

int n;
char s[105];

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%s", s);

        int len = strlen(s);

        for (int j = len - 1; j >= 0; j--) {
            printf("%c", s[j]);
        }

        printf("\n");
    }

    return 0;
}
