void calc(struct student *p,int n) {
    for (int i = 0 ; i < n; i++) {
        p[i].sum = p[i].score[0] + p[i].score[1] + p[i].score[2];
    }
}

void swap(struct student *a, struct student *b) {
    struct student temp = *a;
    *a = *b;
    *b = temp;
}

void sort(struct student *p,int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (p[j].sum < p[j + 1].sum) {
                swap(&p[j], &p[j + 1]);
            }
        }
    }
}

/*
// or use qsort:

int cmp(struct student *a, struct student *b) {
    return b->sum - a->sum;
}

void sort(struct student *p,int n) {
    qsort(p, n, sizeof(struct student), cmp);
}
*/
