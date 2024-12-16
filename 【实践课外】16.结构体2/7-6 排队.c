#include <stdio.h>

struct node {
    int id, rank, pre_id, suf_id;
    double height;
};

int n;
struct node p[1005];

int cmp_by_height(const void *a, const void *b) {
    struct node *pa = (struct node *)a,
                *pb = (struct node *)b;

    if (pa->height != pb->height) {
        return pa->height < pb->height ? 1 : -1;
    }

    return 0;
}

int cmp_by_id(const void *a, const void *b) {
    struct node *pa = (struct node *)a,
                *pb = (struct node *)b;

    return pa->id - pb->id;
}

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%lf", &p[i].height);
        p[i].id = i;
    }

    qsort(p + 1, n, sizeof(struct node), cmp_by_height);

    for (int i = 1; i <= n; i++) {
        p[i].rank = i;
        p[i].pre_id = i - 1 < 1 ? 0 : p[i - 1].id;
        p[i].suf_id = i + 1 > n ? 0 : p[i + 1].id;
    }

    qsort(p + 1, n, sizeof(struct node), cmp_by_id);

    for (int i = 1; i <= n; i++) {
        printf("%d %d %d\n", p[i].rank, p[i].pre_id, p[i].suf_id);
    }

    return 0;
}
