#include<stdio.h>
int main()
{
    int n,t,count;
    scanf("%d",&n);
    for ( int i=2;i<=n;i++){
        t=0;
        for(int k=2; k<i;k++){
            if(i%k==0){
                t=1;
            }
        }
        if(t==0){
            count++;
        }        
    }
    printf("%d",count);
    return 0;
    
}