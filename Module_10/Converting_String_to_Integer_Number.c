#include<stdio.h>

int main(){
    char str[5] = "9";

    printf("%d\n",str[0]-'0');

    char s[20];

    int n;
    scanf("%d",&n);
    scanf("%s", s);

    int num = 0;
    for(int i=0;i<n;i++){
        int digit = s[i] - '0';

        num = num * 10 + digit;
    }
    printf("%d\n",num);
    return 0;
}