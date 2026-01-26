#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>99 && 999>n){
        printf("Three-digit number");
    }
    else{
        printf("Greater or less");
    }
    return 0;
}