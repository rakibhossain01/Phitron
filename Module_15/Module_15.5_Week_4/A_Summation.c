#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    int *a = (int *) malloc (n * sizeof(int));

    long long int *sum = (long long int *) malloc(sizeof(long long int));
    *sum = 0;

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        *sum+=a[i];
    }
    //printf("%d\n",abs(*sum));
    if(*sum>=0){
        printf("%lld\n",*sum);
    }
    else{
        printf("%lld\n",(-1)*(*sum));
    }
    free(a);
    free(sum);

    return 0;
}