void Shift(char s[]) {
    int s_len = strlen(s);
    memcpy(s + s_len, s, 3);
    memcpy(s + 3, s, s_len);
}
