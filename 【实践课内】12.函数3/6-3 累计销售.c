double price(double x) {
    static double sum = 0;

    sum += x;

    if (sum < 5000) return sum * 0.01;
    if (sum < 10000) return sum * 0.05;
    return sum * 0.1;
}
