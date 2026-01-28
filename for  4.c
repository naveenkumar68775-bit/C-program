#include<stdio.h>
int main()
{
    int n,s=0;
    printf("Type:");
    scanf("%d",&n);
    for (int i=1;i<=10;i++){
        s=i*n;
        printf("%d ",s);
        }
    return 0;
}