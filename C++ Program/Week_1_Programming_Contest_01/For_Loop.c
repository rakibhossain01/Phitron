#include<stdio.h>

int main(){

    printf("Before for Loop\n");

    for(int i=1; i<=3 ; i++){
        printf("Inside Loop\n");
        printf("Value of i = %d\n",i);
    }

    printf("Break\n");

    for(int i=3; i>=1 ; i--){
        printf("Inside Loop\n");
        printf("Value of i = %d\n",i);
    }
    
    printf("Outside for Loop\n");
    return 0;
}