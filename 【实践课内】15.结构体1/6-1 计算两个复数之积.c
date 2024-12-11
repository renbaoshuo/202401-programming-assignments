struct complex multiply(struct complex x, struct complex y) {
    struct complex z;
    z.real = x.real * y.real - x.imag * y.imag;
    z.imag = x.real * y.imag + x.imag * y.real;
    return z;
}
