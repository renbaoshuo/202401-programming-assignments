#include <stdio.h>

struct node {
    int x;
    struct node *next;
};

int n;
struct node *head;

void insert_after(struct node *cur, int pos, int x) {
    if (cur->next == NULL) {
        struct node *nxt = (struct node *)malloc(sizeof(struct node));
        nxt->x = x;
        nxt->next = NULL;
        cur->next = nxt;

        return;
    }

    if (pos == cur->x) {
        struct node *nxt = (struct node *)malloc(sizeof(struct node));
        nxt->x = x;
        nxt->next = cur->next;
        cur->next = nxt;

        return;
    }

    insert_after(cur->next, pos, x);
}

void cleanup() {
    struct node *ptr = head;

    while (ptr != NULL) {
        struct node *tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
}

int main() {
    head = (struct node *)malloc(sizeof(struct node));

    scanf("%d", &n);

    for (int i = 1, x; i <= n; i++) {
        scanf("%d", &x);

        insert_after(head, x, i);
    }

    int flag = 0;
    struct node *ptr = head;

    while (ptr != NULL) {
        if (ptr->x != 0) {
            if (flag == 1) {
                printf(" ");
            } else {
                flag = 1;
            }

            printf("%d", ptr->x);
        }

        ptr = ptr->next;
    }

    printf("\n");

    cleanup();

    return 0;
}
