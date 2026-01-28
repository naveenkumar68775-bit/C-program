#include<stdio.h>
int main()
{
    int a,b,v=1;
    scanf("%d%d",&a,&b);
    for (int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            v=i;
        }
    }
    printf("%d",v);
    return 0;

}