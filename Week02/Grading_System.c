#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    if(a>=33 && a<=100){
        printf("You have passed\n");
        if(a>=80 && a<=100){
           printf("A+\n");
        }
        else if(a>=70 && a<=79 ){
           printf("A\n");
        }
        else if(a>=60 && a<=69){
           printf("A-\n");
        }
        else if(a>=50 && a<=59){
           printf("B\n");
        }
        else if(a>=40 && a<=49){
           printf("C\n");
        }
        else{
           printf("D\n");
        }
    }
    else{
        printf("You have failed\n");
        
        if(a>=0 && a<=32){
           printf("You r Fail\n");
        }
        else{
           printf("Invalid\n");
        }
    }

    return 0;
}