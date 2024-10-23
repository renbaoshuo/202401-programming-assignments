#include <stdio.h>

int main() {
    int type;
    double s1, s2, s3;

    scanf("%d%lf%lf%lf", &type, &s1, &s2, &s3);

    if (type == 0) {  // 赛跑，从低到高排序
        if (s1 > s2) {
            double temp = s1;
            s1 = s2;
            s2 = temp;
        }

        if (s1 > s3) {
            double temp = s1;
            s1 = s3;
            s3 = temp;
        }

        if (s2 > s3) {
            double temp = s2;
            s2 = s3;
            s3 = temp;
        }

        printf("%.2lf %.2lf %.2lf\n", s1, s2, s3);
    } else {  // type == 1
        if (s1 < s2) {
            double temp = s1;
            s1 = s2;
            s2 = temp;
        }

        if (s1 < s3) {
            double temp = s1;
            s1 = s3;
            s3 = temp;
        }

        if (s2 < s3) {
            double temp = s2;
            s2 = s3;
            s3 = temp;
        }

        printf("%.2lf %.2lf %.2lf\n", s1, s2, s3);
    }

    return 0;
}
