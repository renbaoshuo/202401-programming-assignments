int NumDigit(int number) {
    if (number == 0) return 0;
    return 1 + NumDigit(number / 10);
}
