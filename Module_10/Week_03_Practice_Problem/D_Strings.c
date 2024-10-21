#include<stdio.h>
#include<string.h>

char a[11];
char b[11];

int  main(){
    scanf("%s", a);
    int d = strlen(a);

    scanf("%s", b);
    int e = strlen(b);

    printf("%d %d\n",d,e);
    printf("%s%s\n",a,b);
    
    
    for(int i=0;i<d;i++){
        if(i==0){
            printf("%c",b[i]);
        }
        else{
            printf("%c",a[i]);
        }
    }
    printf(" ");

    for(int i=0;i<e;i++){
        if(i==0){
            printf("%c",a[i]);
        }
        else{
            printf("%c",b[i]);
        }
    }
    printf("\n");

    return 0;
}