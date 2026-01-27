#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int s;
    scanf("%d",&s);
    switch(t){
        case 1:
        printf("savings 4%");
        break;
        case 2:
        if(3<s){
            printf("interest 5%");
        }
        if(3>s){
            printf("interest 7%");
        }
        break;
    }
    return 0;
}