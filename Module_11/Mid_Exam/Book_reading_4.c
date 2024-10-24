#include<stdio.h>

int main(){
    int n,t,sum = 0,cnt=0;
    scanf("%d %d",&n,&t);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-1)-i;j++){
            if(a[j]>a[j+1]){
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }
    for(int i=0;i<n;i++){
        sum+=a[i];

        if(sum<=t){
            cnt++;
        }
    }
    printf("%d\n",cnt);

    return 0;
}