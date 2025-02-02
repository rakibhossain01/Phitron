#include<stdio.h>

int main(){

    printf("Before Loop\n");

    int i=1;

    while(i<=5){
        printf("Inside while loop\n");
        printf("Value of i = %d\n",i);
        i++;
    }

    printf("After Loop\n");

    for(int i=1; i<=5; i++){
         
        printf("Value of i = %d\n",i);

    }

    printf("Break\n");

    int j=1;

    for(;j<=5;){
        printf("Value of j = %d\n",j);
        j++;
    }

    return 0;
}