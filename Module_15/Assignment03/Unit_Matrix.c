#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n][n],cnt=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                if(a[i][j]!=1){
                    cnt = 0;
                    break;
                }
            }
            else{
                if(a[i][j]!=0){
                    cnt = 0;
                    break;
                }
            }
        }
        if(!cnt){
            break;
        }
    }
    if(cnt){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}