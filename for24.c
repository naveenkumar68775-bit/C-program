#include<stdio.h>
int main()
{
    int n,t,rev=0;
    scanf("%d",&n);
    t=n;
    for (; n>0;n=n/10){
        rev=rev*10+(n%10);
    }
    if(rev==t){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}