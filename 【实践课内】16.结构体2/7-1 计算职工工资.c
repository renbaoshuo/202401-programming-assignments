#include <stdio.h>

struct person {
    char name[10];
    double basic, floating, outlay;
};

int n;

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        struct person p;

        scanf("%s %lf %lf %lf", p.name, &p.basic, &p.floating, &p.outlay);

        printf("%s %.2lf\n", p.name, p.basic + p.floating - p.outlay);
    }

    return 0;
}
