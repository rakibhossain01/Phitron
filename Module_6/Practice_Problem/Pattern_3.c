#include<stdio.h>

int main(){
    char c='A';
    int n,K=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%c ", c+K);
        }
        K++;
        printf("\n");
    }
}