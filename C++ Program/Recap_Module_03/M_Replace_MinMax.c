#include<stdio.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    int min= INT_MAX;
    int max= INT_MIN;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(min>a[i]){
            min = a[i];
        }
        if(max<a[i]){
            max = a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==min){
            printf("%d ",max);
        }
        else if(a[i]==max){
            printf("%d ",min);
        }
        else{
            printf("%d ",a[i]);
        }
    }
    printf("\n");

    return 0;
}