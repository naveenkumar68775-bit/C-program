#include<stdio.h>
int main()
{
    int rem,sum=0;
    int n;
    printf("Input:");
    scanf("%d",&n);
    for (int i=n;i>0;i=i/10){
        rem=i%10;
        sum=sum+rem;
    }
    printf("%d",sum);
    return 0;
     
}