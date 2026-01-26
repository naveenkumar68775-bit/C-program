#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'){
        printf("LOWER case");
    }
    else if(ch>='A' && ch<='Z'){
        printf("Upper case");

    }
    return 0;
}