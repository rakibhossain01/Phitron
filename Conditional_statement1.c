#include<stdio.h>

int main(){
    int price=60;

    if(price<=50){
        printf("Buy 4 eggs\n");
        printf("Take %d Taka Back\n",50-price);
    }
    else {
        printf("Buy 2 eggs\n");
    }

    return 0;
}