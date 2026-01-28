#include<stdio.h>
int main(){
    int t;
    printf("Type:");
    scanf("%d",&t);
    int b;
    printf("Bill:");
    scanf("%d",&b);
    int v;
    switch(t){
        case 1:
        printf("$ %d",b/5);
        break;
        case 2:
        printf("$ %d",b/5);
        break;
    }
    return 0;

}