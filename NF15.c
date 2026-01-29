#include<stdio.h>
int main()
{
    for(int i=5;i>0;i--){
        for(int j=1;j<=i;j++){
            printf("%c",j+64);
        }
        printf("\n");
    }
    return 0;
}