#include<stdio.h>

int main(){
    while(1){
        int n,m,sum=0;
        scanf("%d %d",&n,&m);

        if(n>0 && m>0){

            if(n>=m){
                for(int i=m;i<=n;i++){
                    printf("%d ",i);
                    sum+=i;
                }
                printf("sum =%d\n",sum);
            }
            else{
                for(int i=n;i<=m;i++){
                    printf("%d ",i);
                    sum+=i;
                }
                printf("sum =%d\n",sum);
            }
        }
        else{
            break;
        }
    }
}