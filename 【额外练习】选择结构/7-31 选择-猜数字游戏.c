#include <stdio.h>

int main() {
    int total, andy, ban;

    scanf("%d%d%d", &total, &andy, &ban);

    int andyDiff = total - andy;
    int banDiff = total - ban;

    if (andyDiff < 0) andyDiff = -andyDiff;
    if (banDiff < 0) banDiff = -banDiff;

    if (andyDiff == banDiff) {
        if (andy < ban) {
            printf("Andy\n");
        } else if (andy == ban) {
            printf("Peace\n");
        } else {
            printf("Ban\n");
        }
    } else if (andyDiff < banDiff) {
        printf("Andy\n");
    } else {
        printf("Ban\n");
    }

    return 0;
}
