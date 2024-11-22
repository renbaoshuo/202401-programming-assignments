void Show(int number, char symbol) {
    if (number == 0) return;
    printf("%c", symbol);
    Show(number - 1, symbol);
}
