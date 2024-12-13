#include <stdio.h>

struct contact {
    char name[15], birthday[15], gender, tel[20], phone[20];
};

int n, k;
struct contact contacts[15];

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s %c %s %s\n", contacts[i].name, contacts[i].birthday, &contacts[i].gender, contacts[i].tel, contacts[i].phone);
    }

    scanf("%d", &k);

    for (int i = 0; i < k; i++) {
        int x;

        scanf("%d", &x);

        if (x < 0 || x >= n) {
            printf("Not Found\n");

            continue;
        }

        printf("%s %s %s %c %s\n", contacts[x].name, contacts[x].tel, contacts[x].phone, contacts[x].gender, contacts[x].birthday);
    }

    return 0;
}
