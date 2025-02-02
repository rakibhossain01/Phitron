#include<stdio.h>

int a , b;

int add(){
    //int a = 10, b = 40;
    
    int sum = a + b;

    return sum;
}
double getPi(){
    return 3.14159;
}
int main(){
    //a = 20, b = 30;
    //int result = add(10,20);

    //printf("%d\n",result);

    //printf("%d\n",add(30,20));

    scanf("%d %d",&a,&b);

    printf("%d\n",add());

    printf("%lf\n",getPi());

    return 0;
}