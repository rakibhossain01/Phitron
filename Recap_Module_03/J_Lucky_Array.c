#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n],cnt=0;
    int min = INT_MAX;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(min>a[i]){
            min = a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==min){
            cnt++;
        }
    }
    if(cnt%2==0){
        printf("Unlucky\n");
    }
    else{
        printf("Lucky\n");
    }
}