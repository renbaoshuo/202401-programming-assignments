void fun(char *s, char *t) {
    int len = strlen(s);

    for (int i = len - 1; i >= 0; i--) {
        *t = s[i];
        t++;
    }

    for (int i = 0; i < len; i++) {
        *t = s[i];
        t++;
    }

    *t = '\0';
}
