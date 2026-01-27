#include<stdio.h>
int main()
{
    int a;
    printf("ATTEMPT:");
    scanf("%d",&a);
    int m;
    printf("MARK:");
    scanf("%d",&m);
    switch(a){
        case 1:
        if(m>80){
            printf("Excellent");
        }
        break;
        case 2:
        if(m>60){
            printf("Good");
        }
        break;
        case 3:
        if(m>39){
            printf("Need improvement");
        }
        break;

    }
}