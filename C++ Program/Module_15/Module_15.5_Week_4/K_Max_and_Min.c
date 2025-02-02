#include<stdio.h>
#include<stdlib.h>

int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);

    int *p = &x,*q = &y,*r = &z;

    if(*p<=*q && *p<=*r){
        printf("%d ",*p);
    }
    else if(*q<=*p && *q<=*r){
        printf("%d ",*q);
    }
    else if(*r<=*p && *r<=*q){
        printf("%d ",*r);
    }

    if(*p>=*q && *p>=*r){
        printf("%d\n",*p);
    }
    else if(*q>=*p && *q>=*r){
        printf("%d\n",*q);
    }
    else if(*r>=*p && *r>=*q){
        printf("%d\n",*r);
    }

    return 0;
}