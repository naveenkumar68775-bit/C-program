#include<stdio.h>
int main()
{
    int n,sum=0,v;
    scanf("%d",&n);
    for( int i=0; n>0;i++){
        v=n%10;
        sum=sum+v * 2;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}