#include<stdio.h>
int main()
{
    int type;
    printf("Vehicle type:");
    scanf("%d",&type);
    int trip;
    printf("INT Trips:");
    scanf("%d",&trip);
    int amt=0;
    switch(type){
        case 1:
        amt=100;
        if(trip==1){
            printf("$ 100");
        }
        else if(trip<10){
            printf("$ 800");
        }
        else if(10<trip){
            printf("$800");
        }
        break;
        case 2:
        amt=240;
        amt=amt*trip;
        printf("%d",amt);
        break;
    }
    return 0;
}