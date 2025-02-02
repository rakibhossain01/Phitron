#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);

    int x,y;

    while(t--){
        int sum=0;
        scanf("%d %d",&x,&y);
        if(x>=y){
            y=y+1;
            for(int i=y;i<x;i++){
                if(i%2!=0){
                    sum+=i;
                }
            }
            printf("%d\n",sum);
        }
        else{
            x=x+1;
            for(int i=x;i<y;i++){
                if(i%2!=0){
                    sum+=i;
                }
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}