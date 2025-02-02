#include<stdio.h>

int main(){
    char str[] = "Bangladesh is a \"beautiful\" coun\\try";
    //char str[] = "Bangladesh is a \"beaut\0iful\" country";
    puts(str);

    return 0;
}