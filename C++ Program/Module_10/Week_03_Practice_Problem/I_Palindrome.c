#include<stdio.h>
#include<string.h>

char s[1001];

int main(){
    scanf("%[^\n]s",s);

    int len = strlen(s);
    int cnt = 0;

    for(int i=0,j=len-1;i<len/2;i++,j--){
        if(s[i]==s[j]){
            cnt++;
        }
    }
    if(cnt==len/2){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}