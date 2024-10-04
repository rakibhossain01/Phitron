#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    bool flag = a <=b;
    printf("Flag = %d\n",flag);


    if(a==b){
        printf("a and b is equal\n");
    }
    else if(a>b){
        printf("a is greater than b\n");
    }
    else {
        printf("a less than b\n");
    }


    if(a>=b){
        printf("a greater or equal");
    }
    else if(a<=b){
        printf("a less or equal");
    }


    if(a!=b){
        printf("a not equal to b");
    }
    else {
        printf("a equal to b");
    }


    return 0;
}