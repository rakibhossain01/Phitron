#include<stdio.h>

int main(){
    int a,b,c;
    char ch,d;

    scanf("%d %c %d %c %d",&a,&ch,&b,&d,&c);

    if(ch=='+'){
        if((a+b)==c){
            printf("Yes\n");
        }
        else{
            printf("%d\n",a+b);
        }
    }
    else if(ch=='-'){
        if((a-b)==c){
            printf("Yes\n");
        }
        else{
            printf("%d\n",a-b);
        }
    }
    else if(ch=='*'){
        if((a*b)==c){
            printf("Yes\n");
        }
        else{
            printf("%d\n",a*b);
        }
    }

    return 0;
}