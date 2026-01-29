#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            printf(" ");
        }
        for(int v=1;v<=i;v++){
            printf("%c",v+64);
        }
        for(int k=i-1;k>=1;k--){
            printf("%c",k+64);
        }
        printf("\n");
    }
    return 0;
}