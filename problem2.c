#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    char ch;
    getchar();
    scanf("\n%c",&ch);
    printf("a=%d  b=%d  c=%d ch=%c\n",a,b,c,ch);

    float f;
    scanf("%f",&f);
    printf("%f",f);

    int g;
    scanf("%d",&g);
    printf("4%d",g);
    return 0;
}
/*
Formet Specifier 

 int %d
 short int %hf
 long int %ld
 long long %lld
 char %c
 float %f
 double %lf
 long double  %Lf

 unsigned int %u
 unsigned short %hu
 unsigned long int %lu
 unsigned long long int %llu

*/