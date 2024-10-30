#include <stdio.h>

int main() {
    int xL, yL, xR, yR, x, y;

    scanf("%d%d%d%d%d%d", &xL, &yL, &xR, &yR, &x, &y);

    if (x >= xL && x <= xR && y <= yL && y >= yR) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
