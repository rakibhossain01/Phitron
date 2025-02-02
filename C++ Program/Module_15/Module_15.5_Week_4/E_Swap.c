#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y;
    scanf("%d %d",&x,&y);

    int *p = &x, *q = &y,temp = x;
    *p = y;
    *q = temp;

    printf("%d %d\n",*p,*q);

    return 0;
}