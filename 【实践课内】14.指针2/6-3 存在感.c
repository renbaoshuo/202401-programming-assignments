int frequency(char* paragraph, char* from, char* to) {
    int cnt = 0;
    int len = strlen(paragraph);

    for (int i = 0; i < len; i++) {
        if (paragraph[i] == from[0]) {
            int flag = 1;

            for (int j = 1; from + j <= to; j++) {
                if (paragraph[i + j] != from[j]) {
                    flag = 0;
                    break;
                }
            }

            if (flag) {
                cnt++;
            }
        }
    }

    return cnt;
}
