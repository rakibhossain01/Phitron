#include<stdio.h>
#include<string.h>

int main(){
    char s[51];
    char t[51];

    int n;
    scanf("%d",&n);

    while(n--){
        scanf("%s",s);
        scanf("%s",t);
        int len_1 = strlen(s);
        int len_2 = strlen(t);

        if(len_1>=len_2){
            for(int i=0;i<len_1;i++){
                if(len_2>i){
                    printf("%c",s[i]);
                    printf("%c",t[i]);
                }
                else{
                    printf("%c",s[i]);
                }
            }
            printf("\n");
        }
        else{
            for(int i=0;i<len_2;i++){
                if(len_1>i){
                    printf("%c",s[i]);
                    printf("%c",t[i]);
                }
                else{
                    printf("%c",t[i]);
                }
            }
            printf("\n");
        }
    }
}
