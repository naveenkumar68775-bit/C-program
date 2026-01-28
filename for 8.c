#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    printf("Input:");
    scanf("%d",&n);
    for (int i=n;i<=n;n=n/10){
        rem=n%10;
        rev=rev*10+rem;
        
    }
    printf("%d",rev);
    return 0;
     
}