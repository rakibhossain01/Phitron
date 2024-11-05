#include<stdio.h>

void add(int a, int b){
    int sum = a + b;

    printf("%d\n",sum);

    // return ;
}
void alphaCheck(char c){
    if('a'<=c && c<='z'){
        printf("lower\n");
    }
    else{
        printf("Upper\n");
    }
}
int main(){

    //int result = add(10,20);

    //printf("%d\n",result);

    add(30,20);

    alphaCheck('f');
    alphaCheck('H');

    return 0;
}