#include<stdio.h>
int main()
{
    int loan;
    printf("Type:");
    scanf("%d",&loan);
    int score;
    printf("Credit score:");
    scanf("%d",&score);
    switch(loan){
        case 1:
        if(700<=score){
            printf("Approved");
        }
        else if(650<=score && score<=699){
            printf("Manual Review");
        }
        break;
        case 2:
        if(score>=700){
            printf("Approved");
        }
        else if(score<700){
            printf("Rejected");
        }
        break;
    }
    return 0;
}