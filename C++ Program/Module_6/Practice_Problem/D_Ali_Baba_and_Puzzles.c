#include<stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c,d,s,e,f,g,h,i;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    s = a+b*c;
    e = a+b-c ;
    f = a-b+c;
    g = a-b*c;
    h = a*b+c;
    i = a*b-c;

    if((s==d || e==d || f==d || g==d  || h==d || i==d)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}