#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if('a'==c||c=='A' || 'e'==c||c=='E' || 'i'==c||c=='I' || 'o'==c||c=='O' || 'u'==c||c=='U'){
        printf("VOWEL");
    }
    else{
        printf("CONSTANT");
    }
}