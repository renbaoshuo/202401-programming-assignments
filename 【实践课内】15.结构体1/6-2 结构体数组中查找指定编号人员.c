struct student fun(struct student *std, char *num) {
    struct student res = {"\0", 0, 0, 0};

    for (int i = 0; i < N; i++) {
        if (strcmp(std[i].num, num) == 0) {
            res = std[i];
            break;
        }        
    }

    return res;
}
