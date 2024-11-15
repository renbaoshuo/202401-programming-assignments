#include <stdio.h>
#include <string.h>

char s[500005];
int cnt, start_pos[500005], len[500005];

int main() {
    gets(s);

    int len_s = strlen(s);

    for (int i = 0; i < len_s; i++) {
        if (s[i] == ' ') {
            if (i == 0 || s[i - 1] == ' ') {
                continue;
            }
            start_pos[cnt] = i - len[cnt];
            cnt++;
            len[cnt] = 0;
        } else {
            len[cnt]++;
        }
    }

    if (len_s > 0 && s[len_s - 1] != ' ') {
        start_pos[cnt] = len_s - len[cnt];
        cnt++;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        for (int j = start_pos[i]; j < start_pos[i] + len[i]; j++) {
            printf("%c", s[j]);
        }

        if (i != 0) {
            printf(" ");
        } else {
            printf("\n");
        }
    }

    return 0;
}
