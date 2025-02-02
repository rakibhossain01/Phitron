#include<stdio.h>

int a[100000];

int main(){
    int length;
    scanf("%d",&length);

    for(int i=0;i<length;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<length;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    int index;
    scanf("%d",&index);

    for(int i=index;i<length-1;i++){
        a[i] = a[i+1];
    }
    length--;

    printf("After index Delete\n");
    for(int i=0;i<length;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}