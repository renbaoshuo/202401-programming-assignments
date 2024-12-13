#include <stdio.h>

struct student {
    char id[10], name[10];
    int score;
};

int n;
double avg;
struct student stu[10];

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s %d", stu[i].id, stu[i].name, &stu[i].score);

        avg += stu[i].score;
    }

    avg /= n;

    printf("%.2lf\n", avg);

    for (int i = 0; i < n; i++) {
        if (stu[i].score < avg) {
            printf("%s %s\n", stu[i].name, stu[i].id);
        }
    }

    return 0;
}
