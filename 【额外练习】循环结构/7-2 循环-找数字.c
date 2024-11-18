#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    gets(str);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
