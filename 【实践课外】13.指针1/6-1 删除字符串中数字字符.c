void delnum(char *s) {
    int s_len = strlen(s);

    for (int i = 0; i < s_len; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            for (int j = i; j < s_len; j++) {
                s[j] = s[j + 1];
            }
            s_len--;
            i--;
        }
    }
}
