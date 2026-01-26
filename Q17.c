#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0 && n<=20){
        printf("number is with in range");
    }
    else{
        printf("Not in range");
    }
    return 0;
}