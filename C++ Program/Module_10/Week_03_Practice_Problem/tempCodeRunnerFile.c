#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d",&t);

    char str[101];

    while(t--){
        scanf("%s",str);

        int n = strlen(str) - 2;

        if(n>=10){
            printf("%c%d%c\n",str[0],n,str[n-1]);
        }
        else{
            printf("%s\n",str);
        }
    }
}