#include<stdio.h>
#include<math.h>

int main(){
    int a;
    scanf("%d",&a);

    a+=10;

    printf("%d\n",a);

    a-=10;
    printf("%d\n",a);

    a*=10;
    printf("%d\n",a);

    a++;
    printf("%d\n",a);

    ++a;
    printf("%d\n",a);

    a--;
    printf("%d\n",a);

    --a;
    printf("%d\n",a);

    return 0;
}