#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    for(char i='a'; i<='z'; i++){
        printf("%c\n",i);
    }

    int sum=0;

    for(int i=1; i<=n;i++){
        printf("%d + %d = %d\n",sum,i,sum+i);
    }

    for(int i=1 ; i<=n; i++){
        if(i%2==0){
            printf("%d is even\n",i);
        }
        else{
            printf("%d is Odd\n",i);
        }
    }

    return 0;
}