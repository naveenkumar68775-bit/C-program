#include<stdio.h>
int main()
{
    int a,b,s=0;
    scanf("%d%d",&a,&b);
    for (int i=1;i<=b;i++){
        if(i%a==0){
            s=s+i;  
        }      
    }
    printf("%d",s);
    return 0;
}