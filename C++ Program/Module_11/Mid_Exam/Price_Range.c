#include<stdio.h>

int main(){
    long long int n,x,y,cnt=0,i;
    scanf("%lld %lld %lld",&n,&x,&y);

    long long int a[n];

    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i]>=x && a[i]<=y){
            cnt++;
        }
    }
    printf("%lld\n",cnt);

    return 0;
}