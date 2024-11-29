void fun(int *p, int *q) {
    int p_s = *p / 100,
        p_e = *p % 100;
    int q_s = *q / 100,
        q_e = *q % 100;

    *p = p_s * 100 + q_e;
    *q = q_s * 100 + p_e;
}
