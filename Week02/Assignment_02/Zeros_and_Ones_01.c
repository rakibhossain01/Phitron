#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n],cnt=0,sm=0;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

        if(a[i]==1){
            cnt++;
        }
        else{
            sm++;
        }
    }
    printf("%d %d",sm,cnt);

    return 0;
}