int max_len(char *s[], int n) {
    int max_len = 0;

    for (int i = 0; i < n; i++) {
        int len = strlen(s[i]);
        if (len > max_len) {
            max_len = len;
        }
    }

    return max_len;
}
