#include <stdio.h>

int main() {
    double open, high, low, close;

    scanf("%lf%lf%lf%lf", &open, &high, &low, &close);

    if (close < open) {
        printf("BW-Solid");
    } else if (close > open) {
        printf("R-Hollow");
    } else {
        printf("R-Cross");
    }

    if (low < open && low < close || high > open && high > close) {
        printf(" with ");

        if (low < open && low < close && high > open && high > close) {
            printf("Lower Shadow and Upper Shadow");
        } else if (low < open && low < close) {
            printf("Lower Shadow");
        } else {  // high > open && high > close
            printf("Upper Shadow");
        }
    }

    return 0;
}
