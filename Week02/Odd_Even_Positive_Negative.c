#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    if(a%2==0){
        printf("%d is even number and ",a);
        if(a>=0){
            printf("Positive number\n");
        }
        else{
        printf("Negative number\n");
        }
    }
    else{
        printf("%d is odd number and ",a);
        if(a>=0){
            printf("Positive number\n");
        }
        else{
        printf("Negative number\n");
        }
    }
    return 0;
}