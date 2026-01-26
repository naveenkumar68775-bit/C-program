#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>75 && n<90){
        printf("Grade B");
    }
    else if(n>50 && n<74){
        printf("Grade c");
    }
    else if(n>35 && n<49){
        printf("Pass");
    }
    return 0;
}