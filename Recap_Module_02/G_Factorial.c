#include<stdio.h>

int main(){
    long long int t,i;
    scanf("%lld",&t);

    while(t--){
        long long int n,f=1;
        scanf("%lld",&n);
        for(i=1;i<=n;i++){
            f*=i;
        }
        printf("%lld\n",f);
    }

    return 0;
}