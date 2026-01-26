#include<stdio.h>
int main()
{
    int  a,b;
    printf("Enter:");
    scanf("%d%d\n",&a,&b);
    printf("1.ADD\n");
    printf("2.SUB\n");
    printf("3,mul\n");
    printf("4.div\n");
    int t;
    scanf("%d",&t);
    switch(t){
        case 1:
            printf("sum=%d",a+b);
            break;
        case 2:
            printf("sum=%d",a-b);
            break;
        case 3:
            printf("sum=%d",a*b);
            break;
        case 4:
            printf("sum=%d",a/b);
            break;
        default:
            printf("Invalid");
    }
}