#include<stdio.h>

int main(){
    int a = 5;

    int *x = &a;

    int **y = &x;

    printf("%d %d\n",y, &x);

    printf("%d %d\n",*y, &a);

    printf("%d %d\n",**y,*x);

    return 0;
}