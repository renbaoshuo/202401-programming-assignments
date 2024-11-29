char *str_cat(char *s, char *t) {
    int s_len = strlen(s),
        t_len = strlen(t);
    memcpy(s + s_len, t, t_len);
    return s;
}
