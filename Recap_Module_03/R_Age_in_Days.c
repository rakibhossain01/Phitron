#include<stdio.h>
 
int main()
{
    int n,y,m,d;
    scanf("%d",&n);
 
    y=n/365;
    m=(n-(y*365))/30;
    d=(n-(y*365))-(m*30);

    printf("%d years\n",y); 
    printf("%d months\n",m);
    printf("%d days\n",d);
 
    return 0;
}