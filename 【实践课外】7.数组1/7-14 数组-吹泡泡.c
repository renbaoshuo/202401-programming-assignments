#include <stdio.h>

const double PI = 3.14;
const double FDT = 1.33;

int n, id[1005];
double v[1005];

int main() {
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        double r;

        scanf("%lf", &r);

        v[i] = FDT * PI * r * r * r;
        id[i] = i;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            if (v[j] > v[j - 1] || (v[j] == v[j - 1] && id[j] < id[j - 1])) {
                double t = v[j];
                v[j] = v[j - 1];
                v[j - 1] = t;

                int tt = id[j];
                id[j] = id[j - 1];
                id[j - 1] = tt;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%.2lf %d\n", v[i], id[i]);
    }

    return 0;
}
