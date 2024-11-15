#include <stdio.h>

char s[100];
int ip[4];

int main() {
    scanf("%s", s);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            ip[i] = ip[i] * 2 + s[i * 8 + j] - '0';
        }
    }

    printf("%d.%d.%d.%d\n", ip[0], ip[1], ip[2], ip[3]);

    return 0;
}
