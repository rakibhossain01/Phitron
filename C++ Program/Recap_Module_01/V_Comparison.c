#include<stdio.h>

int main(){
    int a,b;
    char ch;

    scanf("%d",&a);
    scanf(" %ch",&ch);
    scanf("%d",&b);

    if(ch=='>'){
        if(a>b){
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        }
    }
    else if(ch=='<'){
        if(a<b){
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        }
    }
    else if(ch=='='){
        if(a==b){
            printf("Right\n");
        }
        else{
            printf("Wrong\n");
        }
    }

    return 0;
}