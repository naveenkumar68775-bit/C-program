#include<stdio.h>
int main()
{
    int p,q,r;
    scanf("%d%d%d",&p,&q,&r);
    if(p==q && q==r){
        printf("Equalateral triangle");
    }
    else if(p!=q && p!=r){
        printf("Not Equal");
    }
    return 0;
}