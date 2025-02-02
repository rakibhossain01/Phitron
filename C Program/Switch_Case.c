#include<stdio.h>

int main(){
    int Day;
    scanf("%d %d",&Day);

    switch (Day)
    {
    case 1:
        printf("SaturDay\n");
        break;
    case 2:
        printf("SunDay\n");
        break;
    case 3:
        printf("MonDay\n");
        break;
    case 4:
        printf("TuesDay\n");
        break;
    case 5:
        printf("WednesDay\n");
        break;
    case 6:
        printf("ThursDay\n");
        break;
    case 7:
        printf("Friday\n");
        break;
    default:
        break;
    }

    return 0;
}