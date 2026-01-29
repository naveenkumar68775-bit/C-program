#include<stdio.h>
int main()
{
    int count=0;
    for(int i=1;i<=51;i++){
        for(int j=1;j<=i;j++){
            printf("%c",count+64);
            count++;
        }
        printf("\n");
    }
    return 0;
}