#include<stdio.h>
int main()
{
    int m,a;
    scanf("%d\n%d",&m,&a);
    if(75<=a){
        if(m>75){
            printf("Distinction");
        }
        else if(50<m && 74>m){
            printf("pass");
        }
        else if(m<50){
            printf("fail");
        }
    }
    else{
        printf("all fail");
    }
}