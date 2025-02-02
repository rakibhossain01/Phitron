#include<stdio.h>

int main(){
     int a;
     scanf("%d",&a);

     if(a < 5){
        printf("Less than 5\n");
     }
     else if(a < 10){
        printf("Less than 10\n");
     }
     else if(a < 15){
        printf("Less than 15\n");
     }
     else {
        printf("Less than 100\n");
     }

     return 0;
}