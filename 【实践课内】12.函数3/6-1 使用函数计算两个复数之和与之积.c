// double result_real, result_imag;

void complex_add(double real1, double imag1, double real2, double imag2) {
    result_real = real1 + real2;
    result_imag = imag1 + imag2;
}

void complex_prod(double real1, double imag1, double real2, double imag2) {
    result_real = real1 * real2 - imag1 * imag2;
    result_imag = real1 * imag2 + real2 * imag1;
}
