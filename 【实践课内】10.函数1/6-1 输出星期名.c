const char WEEKDAY[7][4] = {"日", "一", "二", "三", "四", "五", "六"};

void ShowDayWeek(int dow) {
    if (dow < 0 || dow >= 7) return;

    printf("%s", WEEKDAY[dow]);
}
