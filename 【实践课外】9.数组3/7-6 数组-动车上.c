#include <stdio.h>
#include <string.h>

int k;
char s[105];

int main() {
    scanf("%d\n%s", &k, s);

    int len = strlen(s);

    for (int i = 0, cnt = 0; i < len; i += k, cnt++) {
        if (i + k - 1 < len) {
            if (cnt % 2 == 1) {
                for (int j = i + k - 1; j >= i; j--) {
                    printf("%c", s[j]);
                }
            } else {
                for (int j = i; j < i + k; j++) {
                    printf("%c", s[j]);
                }
            }
        } else {
            for (int j = i; j < len; j++) {
                printf("%c", s[j]);
            }
        }
    }

    printf("\n");

    return 0;
}
