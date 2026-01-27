#include<stdio.h>
int main()
{
    int s;
    printf("TYPE :");
    scanf("%d",&s);
    int t;
    printf("Time :");
    scanf("%d",&t);
    switch(s){
        case 1:
        printf("Fll access any time");
        break;
        case 2:
        if(9<=t && 20>=t){
            printf("Limited Acess");
        }
        else if(20<t){
            printf("Acess Denied");
        }
        break;
    }
    return 0;
}