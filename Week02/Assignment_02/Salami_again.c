#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    int m = INT_MIN;

    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);

        if(a[i]> m){
            m = a[i];
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ",abs(a[i]-m));
    }

    return 0;
}