#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--){
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for (int j=4;j>=i;j--){
            printf("  ");
        }
        for(int v=i;v>=1;v--){
            printf("*");  
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++){
        for(int k=1;k<=i;k++){
            printf("*");
        }
        for (int j=1;j<=5-i;j++){
            printf("  ");
        }
        for(int v=i;v>=1;v--){
            printf("*");  
        }
        printf("\n");
    }
    
    return 0;

}