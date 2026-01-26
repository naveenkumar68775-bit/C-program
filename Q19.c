#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(n>='0' && n<='9'){
        printf("DIGIT");
    }
    else {
        printf("Other Words");
    }
    return 0;
}