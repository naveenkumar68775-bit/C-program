#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        for(int k=1;k<=i;k++){
            int v=i+k;
            if(v%2==0){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
}