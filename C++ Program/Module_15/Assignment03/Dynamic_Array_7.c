#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        int b;
        scanf("%d", &b);
        a = (int *)realloc(a, (i + 1) * sizeof(int));
        a[i] = b;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");

    free(a);

    return 0;
}
