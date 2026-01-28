#include<stdio.h>
int main()
{
    int n,v,count;
    scanf("%d",&n);
    for ( int i=2;i<=n;i++){
        v=0;
        for(int k=2; k<i;k++){
            if(i%k==0){
                v=1;
            }
        }
        if(v==0){
            count++;
        }        
    }
    printf("%d",count);
    return 0;
    
}