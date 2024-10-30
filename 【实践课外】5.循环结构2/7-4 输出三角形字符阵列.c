#include <stdio.h>

int main() {
    int n;
    char c = 'A';

    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", c++);
        }

        printf("\n");
    }

    return 0;
}
