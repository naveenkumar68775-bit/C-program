#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++){
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for (int j=1;j<=7-i;j++){
            printf(" ");
        }
        for(int v=i;v<=2;v++){
            printf("%d",v);  
        }
    }
    printf("\n");
    return 0;

}