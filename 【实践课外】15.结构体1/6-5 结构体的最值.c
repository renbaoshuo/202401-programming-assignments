ST* MaxST(ST d[], int n, int k) {
    ST* res = NULL;

    for (int i = 0; i < n; i++) {
        if (d[i].gender == k) {
            if (res == NULL || d[i].scored > res->scored) {
                res = &d[i];
            }
        }
    }

    return res;
}
