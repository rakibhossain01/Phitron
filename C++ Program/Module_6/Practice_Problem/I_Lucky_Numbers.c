#include<stdio.h>
#include<math.h>

int main(){
    int n,s,d;
    scanf("%d",&n);
    s = n/10;
    d = n%10;
    
    if(n%10==0){
        printf("YES\n");
    }
    else if((s%d)==0  || (d%s)==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}