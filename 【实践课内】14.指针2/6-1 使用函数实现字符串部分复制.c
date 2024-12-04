void strmcpy(char *src, int begin_idx, char *dst) {
    int len = strlen(src);

    begin_idx--;

    for (int i = begin_idx; i < len; i++) {
        *dst = src[i];
        dst++;
    }

    *dst = '\0';
}
