const char WEEKDAYS[][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int getindex(char *s) {
    for (int i = 0; i < 7; i++) {
        if (strcmp(s, WEEKDAYS[i]) == 0) {
            return i;
        }
    }

    return -1;
}
