#include<stdio.h>
int main()
{
    int dev;
    printf("Developer:");
    scanf("%d",&dev);
    int test;
    printf("Experience:");
    scanf("%d",&test);
    int amt=0;
    switch(dev){
        case 1:
            amt=50000;
            amt=amt+(test*5000);
            printf("%d",amt);
            break;
        case 2:
            amt=35000;
            amt=amt+(test*5000);
            printf("%d",amt);
            break;
        }
        
        return 0;

}


