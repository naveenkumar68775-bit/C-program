#include<stdio.h>
int main()
{
    int t;
    printf("Type:");
    scanf("%d",&t);
    int u;
    printf("Unit:");
    scanf("%d",&u);
    int amt=0;
    switch(t){
        case 1:
        if(t<=30){
            printf("%d",u*5);
        }
        else {
            amt=8;
            amt=(30*5)+((u-30)*amt);
            printf("%d",amt);
        }
        break;
        case 2:
        printf("%d",u*10);
        break;
    }
    return 0;
}
    
    