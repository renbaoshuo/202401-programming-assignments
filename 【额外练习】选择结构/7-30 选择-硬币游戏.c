#include <stdio.h>

int main() {
    int a, b;

    scanf("%d%d", &a, &b);

    // [Theorem]
    // In a normal nim game, the player making the first move has a winning strategy
    // if and only if the nim-sum of the sizes of the heaps is not zero. Otherwise,
    // the second player has a winning strategy.
    // Source: https://en.wikipedia.org/wiki/Nim
    if ((a ^ b) == 0) {
        printf("abcdxyzk\n");
    } else {
        printf("AekdyCoin\n");
    }

    return 0;
}
