#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c >='0' && c <='9'){
        printf("DIGIT");
    }
    else if((c >='A' && c <='Z')||(c>='a' && c<='z')){
        printf("Alphabet");
    }
    else{
        printf("Special character");
    }
    
}
