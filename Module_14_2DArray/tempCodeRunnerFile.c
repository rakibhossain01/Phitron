#include<stdio.h>

int main(){
    int a[3][5];

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            printf("i = %d, j = %d, address = %d",i,j,&a[i][j]);
        }
        printf("\n");
    }
}