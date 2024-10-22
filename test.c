#include<stdio.h>
#include<string.h>

int main()
{
char a[] = "hello";
char b[] = "world";
char c[] = "hello world";
strcat(b,a);
//strcpy(c,b);
printf("%s\n",strcpy(c,b));
}