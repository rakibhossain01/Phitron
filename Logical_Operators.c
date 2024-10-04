#include<stdio.h>
#include<stdbool.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    bool result = (2 < 5) || (4 > 5) || (5 < 6);
    printf("%d",result);


    if(a==b && b==c){
        printf("\na , b and c is equal\n");
    }
    else if(a>b && a>c){
        printf("\na is greater than b,c\n");
    }
    else if(b>a && b>c){
        printf("\nb is greater than a,c\n");
    }
    else {
        printf("\nc is greater than a,b\n");
    }

    return 0;
}