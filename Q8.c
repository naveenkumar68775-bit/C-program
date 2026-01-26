#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%3==0 && n%7==0){
        printf("Multiplt fo both 3 & 7");
    }
    else{
        printf("Not multiple");
    }
    return 0;
}
