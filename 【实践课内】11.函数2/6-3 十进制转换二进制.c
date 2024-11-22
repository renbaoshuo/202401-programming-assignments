int _dectobin_call_count = 0;

void dectobin(int n) {
    if (n == 0 && _dectobin_call_count != 0) return;
    _dectobin_call_count++;
    dectobin(n >> 1);
    printf("%d", n & 1);
}
