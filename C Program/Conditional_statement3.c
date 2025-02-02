#include<stdio.h>
#include<stdbool.h>

int main(){
    int tourDays ;
    scanf("%d",&tourDays);

    if(tourDays == 2){

        bool isBoatAvailable = true;

        if(isBoatAvailable){
            printf("Going to Tangur\n");
        }
        else {
            printf("Going to Srimongol\n");
        }
    }
    else if(tourDays==4){

        bool isShipAvailable = true;

        if(isShipAvailable){
            printf("Going to Sainmartin\n");
        }
        else {
            printf("Going to Cox'Bazar\n");
        }
    }
    else {
        printf("No Tour\n");
    }

    return 0;
}