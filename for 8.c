#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    printf("Input:");
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        
    }
    printf("%d",rev);
    return 0;
     
}