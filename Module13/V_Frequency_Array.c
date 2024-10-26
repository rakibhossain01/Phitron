#include<stdio.h>

int f[100008];

int main(){
    int n,m;
    scanf("%d %d",&n,&m);

    int a[n];

    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);

        f[a[i]] +=1;
    }
    for(int i=1;i<=m;i++){
        
        printf("%d\n",f[i]);
    }

    return 0;
}