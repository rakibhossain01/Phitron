#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n],cnt=0;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0,j=n-1; i<(n/2) ; i++,j--){
        if(a[i]==a[j]){
            cnt++;
        }
    }
    if(cnt==(n/2)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}