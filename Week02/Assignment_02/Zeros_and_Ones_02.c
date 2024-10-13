#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int t;
    scanf("%d",&t);

    for(int i=1;i<=n;i++){
        if(i==t){
            if(a[t]==0){
                printf("1 ");
            }
            else if(a[t]==1){
                printf("0 ");
            }
        }
        else{
            printf("%d ",a[i]);
        }
    }

    return 0;
}