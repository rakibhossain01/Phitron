#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    if(a<10){
        a+=100;
        printf("Hello World!\n");
    }

    printf("%d\n",a);

    return 0;
}