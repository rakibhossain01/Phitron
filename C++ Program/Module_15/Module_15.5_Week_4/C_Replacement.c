#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    int *arr = (int *) malloc (n * sizeof(int));

    int *temp;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            printf("1 ");
        }
        else if(arr[i]<0){
            printf("2 ");
        }
        else{
            printf("0 ");
        }
    }
    printf("\n");

    free(arr);

    return 0;
}