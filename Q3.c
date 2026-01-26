#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("Divisible by 5");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}