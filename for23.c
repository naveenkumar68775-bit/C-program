#include<stdio.h>
int main()
{
    int n,m ,f=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i!=0)
            continue;
        else{
            f=1;
            printf("Not prime");
            break;
        }
    }
    if(f==0){
        printf("Prime");
    }
    return 0;
}