#include <stdio.h>

struct student {
    char id[10], name[10];
    int score[3];
    int sum_score;
};

int n, max_id;
struct student stu[10];

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s", stu[i].id, stu[i].name);

        for (int j = 0; j < 3; j++) {
            scanf("%d", &stu[i].score[j]);

            stu[i].sum_score += stu[i].score[j];
        }
    }

    for (int i = 1; i < n; i++) {
        if (stu[i].sum_score > stu[max_id].sum_score) {
            max_id = i;
        }
    }

    printf("%s %s %d\n", stu[max_id].name, stu[max_id].id, stu[max_id].sum_score);

    return 0;
}
