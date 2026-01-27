#include<stdio.h>
int main()
{
    int t;
    printf("type:");
    scanf("%d",&t);
    int hour;
    printf("Hour:");
    scanf("%d",&hour);
    switch(t){
        case 1:
        printf("%%d",hour*10);
        break;
        case 2:
        printf("$%d",hour*20);
        break;
    }
    return 0;
}