#include <stdio.h>

#define FEMALE (0)
#define MALE (1)

struct student {
    int gender;     // 0 is female, 1 is male
    char name[10];  // the problem promises that the name will not exceed 8 characters
    int has_group;
};

int n, pos[2];
struct student students[55];  // the problem promises that the number of students will not exceed 50

int main() {
    scanf("%d", &n);

    pos[FEMALE] = pos[MALE] = n;

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &students[i].gender, students[i].name);
    }

    for (int i = 0; i < n; i++) {
        if (students[i].has_group) continue;

        int current_gender = students[i].gender,
            target_gender = current_gender ^ 1;

        for (pos[target_gender]--; pos[target_gender] >= 0; pos[target_gender]--) {
            if (students[pos[target_gender]].gender == target_gender
                && !students[pos[target_gender]].has_group) {
                students[pos[target_gender]].has_group = 1;
                students[i].has_group = 1;

                printf("%s %s\n", students[i].name, students[pos[target_gender]].name);

                break;
            }
        }
    }

    return 0;
}
