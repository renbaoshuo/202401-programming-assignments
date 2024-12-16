#include <stdio.h>

#define N 100005

int val[N], pre[N], nxt[N], idx;

void init() {
    // 0 是开头（虚）
    nxt[0] = 1;
    // 1 是结尾（虚）
    pre[1] = 0;
    idx = 2;
}

void insert_pre(int k, int x) {
    val[idx] = x;
    pre[idx] = pre[k];
    nxt[idx] = k;
    nxt[pre[k]] = idx;
    pre[k] = idx;
    idx++;
}

void insert_nxt(int k, int x) {
    val[idx] = x;
    nxt[idx] = nxt[k];
    pre[idx] = k;
    pre[nxt[k]] = idx;
    nxt[k] = idx;
    idx++;
}

void remove_node(int k) {
    nxt[pre[k]] = nxt[k];
    pre[nxt[k]] = pre[k];
}

int main() {
    init();

    int m;

    scanf("%d", &m);

    while (m--) {
        char op[3];
        int k, x;

        scanf("%s", op);

        if (op[0] == 'L') {
            scanf("%d", &x);
            insert_pre(nxt[0], x);
        } else if (op[0] == 'R') {
            scanf("%d", &x);
            insert_nxt(pre[1], x);
        } else if (op[0] == 'D') {
            scanf("%d", &k);
            remove_node(k + 1);
        } else {  // op[0] == 'I'
            scanf("%d %d", &k, &x);

            if (op[1] == 'L') {
                insert_pre(k + 1, x);
            } else {  // op[1] == 'R'
                insert_nxt(k + 1, x);
            }
        }
    }

    for (int i = nxt[0]; i != 1; i = nxt[i]) {
        printf("%d ", val[i]);
    }

    return 0;
}
