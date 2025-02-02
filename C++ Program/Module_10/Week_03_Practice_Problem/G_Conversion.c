#include<stdio.h>
#include<string.h>

char s[100000];

int main(){
    scanf("%[^\n]s", s);

    int len = strlen(s);

    for(int i=0;i<len;i++){
        if(s[i]>='a' && s[i]<='z'){
            printf("%c",s[i]-32);
        }
        else if(s[i]>='A' && s[i]<='Z'){
            printf("%c",s[i]+32);
        }
        else{
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}