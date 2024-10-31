#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int *x = &a;
    int *y = &b;

    printf("%d",abs(*x - *y));

    return 0;
}