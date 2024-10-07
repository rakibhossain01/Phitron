#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n*2;i++){
        if(i%2!=0){
            for(int j=1;j<=(n*2)-i;j++){
                printf(" ");
            }
        }
        if(i%2!=0){
            for(int k=1;k<=i;k++){
                printf("* ");
            }

            printf("\n");

        }
    }

    return 0;
}