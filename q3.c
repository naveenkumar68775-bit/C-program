#include<stdio.h>
int main()
{
    int type;
    printf("Type 1:\n");
    printf("Type 2:");
    scanf("%d",&type);
    int a;
    printf("Balance:");
    scanf("%d",&a);
    int b;
    printf("withdrawl:");
    scanf("%d",&b);
    switch (type){
        case 2:
            if(a<=b){
                printf("Amount:%d",b);
            }
            else if(b>5001){
                printf("Limited Exeeded");
            }
            break;
        case 1:
            if(a>b){
                printf("Transaction successfull");
            }
            else if(a<b){
                printf("Invalid");
            }
            break;
            
    }
    return 0;

}