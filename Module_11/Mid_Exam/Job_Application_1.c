#include<stdio.h>

int main(){
    long long int n,i;
    scanf("%lld",&n);

    long long int a[n];

    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(1>a[i]){
            printf("Entry-level candidate\n");
        }
        else if(a[i]>=1 && a[i]<=3){
            printf("Junior candidate\n");
        }
        else if(a[i]>=4 && a[i]<=7){
            printf("Mid-level candidate\n");
        }
        else{
            printf("Senior candidate\n");
        }
    }

    return 0;
}