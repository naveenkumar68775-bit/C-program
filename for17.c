#include<stdio.h>
int main()
{
    int n,t,v,sum=0,f;
    scanf("%d",&n);
    t=n;
    for( ; t>0;t=t/10){
        v=t%10;
        f=1;
        for(int i=1;i<=v;i++){
            f=f*i;
        }
        sum=sum+f;
    }
    if(sum ==n){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}