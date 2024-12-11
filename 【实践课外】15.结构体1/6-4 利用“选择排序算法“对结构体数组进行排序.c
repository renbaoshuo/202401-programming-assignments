p = p1;

for (p2 = p1 + 1; p2 < pData + n; p2++) {
    if (p2->score > p->score) {
        p = p2;
    }
}

if (p != p1) {
    num = p->num;
    p->num = p1->num;
    p1->num = num;

    score = p->score;
    p->score = p1->score;
    p1->score = score;
}
