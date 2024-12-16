#include <stdio.h>

struct node {
    char name[105];
    int age;
};

int n, k, flag;
struct node stu[105];

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d", stu[i].name, &stu[i].age);
    }

    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        if (stu[i].age != k) {
            if (flag == 1) {
                printf(" ");
            } else {
                flag = 1;
            }

            printf("%s", stu[i].name);
        }
    }

    return 0;
}
