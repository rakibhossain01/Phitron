#include <stdio.h>

int main() {
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);

    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int y[x];

    for(int i=0;i<x;i++){
        scanf("%d",&y[i]);
    }

    for(int k=0;k<x;k++){
        int cnt=0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == y[k]) {
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}
