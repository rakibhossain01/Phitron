#include <stdio.h>

int main() {
    int n,m;
    int b=1;

    scanf("%d %d",&n,&m);

    if (n!=m) {
        printf("NO\n");
        return 0;
    }

    int a[n][m];

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (i==j || j==n-i-1) {
                if (a[i][j] != 1) {
                    b=0;
                    break;
                }
            } 
            else {
                if (a[i][j] != 0) {
                    b=0;
                    break;
                }
            }
        }
        if (!b){
            break;
        }
    }

    if (b) {
        printf("YES\n");
    } 
    else {
        printf("NO\n");
    }

    return 0;
}
