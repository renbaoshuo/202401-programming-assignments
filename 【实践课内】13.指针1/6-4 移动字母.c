void Shift(char s[]) {
    int s_len = strlen(s);
    memcpy(s + s_len, s, 3);
    memcpy(s, s + 3, s_len);
    s[s_len] = '\0';
}
