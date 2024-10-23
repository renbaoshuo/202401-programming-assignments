#include <stdio.h>

int main() {
    int id, avg_score, dis_score, is_cadre, paper_num;
    int ans = 0;

    scanf("%d%d%d%d%d", &id, &avg_score, &dis_score, &is_cadre, &paper_num);

    // 院士奖学金
    if (avg_score > 80 && paper_num >= 1) {
        ans += 8000;
    }

    // 五四奖学金
    if (avg_score > 85 && dis_score > 80) {
        ans += 4000;
    }

    // 成绩优秀奖
    if (avg_score > 90) {
        ans += 2000;
    }

    // 班级贡献奖
    if (dis_score > 80 && is_cadre) {
        ans += 850;
    }

    printf("%d\n", ans);

    return 0;
}
