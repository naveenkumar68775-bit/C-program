#include<stdio.h>
int main()
{
    for(int a=1;a<=5;a++){
        for(int b=1;b<=5-a;b++){
            printf(" ");
        }
        for(int c=1;c<=2*a-1;c++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=5;i>0;i--){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}