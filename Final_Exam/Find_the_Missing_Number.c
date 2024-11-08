#include <stdio.h>

int main() {
    int t;
    unsigned long long m,a,b,c, missing;

    scanf("%d", &t);

    while (t--) {
        scanf("%llu %llu %llu %llu",&m,&a,&b,&c);

        if (a == 0 || b == 0 || c == 0) {
            printf("-1\n");
            continue;
        }

        if (m % (a * b * c) == 0) {
            missing = m / (a * b * c);
            printf("%llu\n", missing);
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
