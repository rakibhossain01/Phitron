#include<stdio.h>

int main(){
    int a = 5, b = 6;

    int *x = &a , *y = &b;

    printf("%d %d\n",a,b);

    int temp = *x; // 5

    *x = *y; // 6

    *y = temp; // 5

    printf("%d %d\n",a,b);

    return 0; 
}