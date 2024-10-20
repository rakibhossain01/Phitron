#include<stdio.h>

int main(){
    // char str[10] = "abcd";

    // printf("%s\n", str);
    // for(int i=0;i<4 ; i++){
    //     printf("%c", str[i]);
    // }
    // printf("\n");

    // char st[50];
    // scanf("%[^\n]s", st);

    // printf("st = %s\n", st);

    char s[50];
    //gets(s)
    //puts(s)
    
    fgets(s, sizeof(s), stdin);
    //printf("%s", s);
    fputs(s, stdout);

    return 0;
}