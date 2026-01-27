#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    switch(n / 10){
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        case 5:
            printf("E");
            break;
        case 4:
            printf("F");
            break;
        case 3:
            printf("suplementary");
            break;
        case 2:
            printf("Fail");
            break;    
        default :
            printf("Invalid");
        

    }
}