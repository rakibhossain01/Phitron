#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    int f[100001] = {0};

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        f[a[i]] += 1;
    }

    int count = 0;

    for (int i = 1; i <= 100000; i++) {
        if (f[i] == 1) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
