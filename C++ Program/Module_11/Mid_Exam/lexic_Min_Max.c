#include<stdio.h>
#include <string.h>

char s1[10001];
char s2[10001];
char s3[10001];

int main(){
    scanf("%s",s1);
    scanf("%s",s2);
    scanf("%s",s3);

    if(strcmp(s1,s2)<0 && strcmp(s1,s3)<0){
        printf("%s\n",s1);
    }
    else if(strcmp(s2,s1)<0 && strcmp(s2,s3)<0){
        printf("%s\n",s2);
    }
    else if(strcmp(s3,s1)<0 && strcmp(s3,s2)<0){
        printf("%s\n",s3);
    }
    if(strcmp(s1,s2)>0 && strcmp(s1,s3)>0){
        printf("%s\n",s1);
    }
    else if(strcmp(s2,s1)>0 && strcmp(s2,s3)>0){
        printf("%s\n",s2);
    }
    else if(strcmp(s3,s1)>0 && strcmp(s3,s2)>0){
        printf("%s\n",s3);
    }

    if(strcmp(s1,s2)==0 && strcmp(s2,s3)==0){
        printf("%s\n",s1);
        printf("%s\n",s2);
    }

    return 0;
}