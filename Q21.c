#include<stdio.h>
int main()
{
    int type;
    printf("Type:");
    scanf("%d",&type);
    int cash;
    printf("price:");
    scanf("%d",&cash);
    int amt=0;
    switch(type){
        case 1:
        amt=150;
        if(cash>18){
            amt=amt+50;
            printf("$ %d",amt);
        }
        else{
            printf(" $ %d",amt);
        }
        break;
        case 2:
        amt=250;
        printf("$ %d",amt);
        break;
    }
    return 0;
}