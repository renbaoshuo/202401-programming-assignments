#include <stdio.h>

struct student {
    char id[20];  // the problem promises that the id will not exceed 16 characters
    int seat1, seat2;
};

int n, m;
struct student students[1005];  // the problem promises that the number of students will not exceed 1000

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", students[i].id, &students[i].seat1, &students[i].seat2);
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        int seat;
        scanf("%d", &seat);

        for (int j = 0; j < n; j++) {
            if (students[j].seat1 == seat) {
                printf("%s %d\n", students[j].id, students[j].seat2);

                break;
            }
        }
    }

    return 0;
}
