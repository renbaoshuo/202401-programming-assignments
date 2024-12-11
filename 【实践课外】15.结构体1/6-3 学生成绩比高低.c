int compareScore(const struct Student *s1, const struct Student *s2) {
    int sum1 = s1->C + s1->English,
        sum2 = s2->C + s2->English;

    if (sum1 == sum2) {
        if (s1->C > s2->C) return 1;
        if (s1->C < s2->C) return -1;

        if (s1->English > s2->English) return 1;
        if (s1->English < s2->English) return -1;

        return 0;
    }

    return sum1 > sum2 ? 1 : -1;
}
