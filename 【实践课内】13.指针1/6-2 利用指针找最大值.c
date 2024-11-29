void findmax(int *px, int *py, int *pmax) {
    if (*px > *py) {
        *pmax = *px;
    } else {
        *pmax = *py;
    }
}
