bool palindrome(char *s) {
    int p = 0,
        q = strlen(s) - 1;

    while (p < q) {
        if (s[p] != s[q]) {
            return false;
        }
        p++;
        q--;
    }

    return true;
}
