void hanoi(int n, char from, char to, char by) {
    if (n == 1) {
        printf("%c->%c\n", from, to);

        return;
    }

    hanoi(n - 1, from, by, to);
    printf("%c->%c\n", from, to);
    hanoi(n - 1, by, to, from);
}
