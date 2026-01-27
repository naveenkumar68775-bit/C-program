#include<stdio.h>
int main()
{
    int type;
    printf("Type:");
    scanf("%d",&type);
    int weight;
    printf("KG :");
    scanf("%d",&weight);
    int amt=0;
    switch(type){
        case 1:
        amt=300;
        printf("%d",weight*amt);
        break;
        case 2:
        amt=300;
        if(weight<=3){
            printf("Free");
        }
        else if(weight>3){
            printf("$ %d",amt*(weight-3));
        }
        break;
    }
    return 0;
}