#include<stdio.h>

int add(){
    int a, b;
    scanf("%d %d",&a,&b); 

    int sum = a + b;

    printf("%d\n",sum);

    return sum;
}
void mul(int x,int y){
    printf("%d\n",x*y);
}

int main(){

    //int result = add(10,20);

    //printf("%d\n",result);

    mul(add(),10);

    return 0;
}