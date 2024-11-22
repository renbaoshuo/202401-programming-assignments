int _printdigits_call_cnt = 0;

void printdigits(int n) {
    if (n == 0 && _printdigits_call_cnt != 0) return;
    _printdigits_call_cnt++;
    printdigits(n / 10);
    printf("%d\n", n % 10);
}
