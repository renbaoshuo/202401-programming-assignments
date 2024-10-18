#include <stdio.h>

int main() {
    int hh, mm, ss;

    scanf("%d:%d:%d", &hh, &mm, &ss);

    int time_seconds = hh * 3600 + mm * 60 + ss;
    int news_seconds = 19 * 3600;
    int divide_seconds = 7 * 3600;

    if (time_seconds <= divide_seconds) {
        time_seconds += 24 * 3600;
    }

    if (time_seconds > news_seconds) {
        int diff_seconds = time_seconds - news_seconds;
        int diff_hh = diff_seconds / 3600;
        int diff_mm = diff_seconds % 3600 / 60;
        int diff_ss = diff_seconds % 60;

        printf("+%02d:%02d:%02d\n", diff_hh, diff_mm, diff_ss);
    } else {
        int diff_seconds = news_seconds - time_seconds;
        int diff_hh = diff_seconds / 3600;
        int diff_mm = diff_seconds % 3600 / 60;
        int diff_ss = diff_seconds % 60;

        printf("-%02d:%02d:%02d\n", diff_hh, diff_mm, diff_ss);
    }

    return 0;
}
