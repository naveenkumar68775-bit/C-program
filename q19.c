#include<stdio.h>
int main()
{
    int t;
    printf("bus pass:");
    scanf("%d",&t);
    int k;
    printf("KM :");
    scanf("%d",&k);
    switch(t){
        case 1:
        if(k<30){
            printf("Eligible");
        }
        else if(k>30){
            printf("Eligible with Extra FEE");
        }
        break;
        case 2:
        if(k<=30){
            printf("ELIGIBLE");
        }
        else if(k>30){
            printf("Not Eligible");
        }
        break;
    }
    return 0;
}