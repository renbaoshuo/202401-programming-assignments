#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex(char *s);

int main() {
    int n;
    char s[MAXS];

    scanf("%s", s);
    n = getindex(s);
    if (n == -1) printf("Not Found\n");
    else printf("%d\n", n);

    return 0;
}

/* 你的代码将被嵌在这里 */

const char DATA[][10] = {"", "red", "blue", "yellow", "green", "black"};

int getindex(char *s) {
    for (int i = 0; i < 7; i++) {
        if (strcmp(s, DATA[i]) == 0) {
            return i;
        }
    }

    return -1;
}
