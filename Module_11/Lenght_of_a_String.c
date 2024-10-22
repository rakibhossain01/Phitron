#include<stdio.h>
#include<string.h>

int main(){
    char str[10] = "abcdef";

    int length =0;
    for(int i=0; str[i] != '\0' ; i++){
        length++;
    }
    printf("%d\n", length);

    char s[10] = "abcd ert";

    int len = strlen(s);

    printf("%d\n",len);

    return 0;
}