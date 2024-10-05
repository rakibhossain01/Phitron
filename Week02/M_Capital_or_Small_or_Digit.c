#include<stdio.h>

int main(){
    char c;
    scanf(" %c", &c);

    if(c>='a' && c<='z'){
        printf("ALPHA\nIS SMALL\n");
    }
    else if(c>='0' && c<='9'){
        printf("IS DIGIT\n");
    }
    else{
        printf("ALPHA\nIS CAPITAL\n");
    }

    return 0;
}