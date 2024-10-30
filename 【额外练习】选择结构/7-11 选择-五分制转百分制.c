#include <stdio.h>

int main() {
    char grade;

    scanf("%c", &grade);

    if (grade == 'A') {
        printf("85~100\n");
    } else if (grade == 'B') {
        printf("70~84\n");
    } else if (grade == 'C') {
        printf("60~69\n");
    } else if (grade == 'D') {
        printf("<60\n");
    } else {
        printf("Error\n");
    }

    return 0;
}
