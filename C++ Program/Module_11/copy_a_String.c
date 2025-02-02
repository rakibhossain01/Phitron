#include<stdio.h>
#include<string.h>

int main(){
    char a[10];

    char b[10] = "abcdef";

    //b(sour)--> a(des)
    //strcpy(des,sour);
    //strcpy(b,"Welcome")
    strcpy(a,b);

    // int len = strlen(b);

    // for(int i=0;/*b[i]!='\0'*/ i<len;i++){
    //     a[i] = b[i];
    // }
    printf("a = %s , b = %s\n",a,b);

    return 0;
}