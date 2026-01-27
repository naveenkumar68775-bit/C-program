#include<stdio.h>
int main()
{
    int type;
    printf("Vehicle:");
    scanf("%d",&type);
    int age;
    printf("Age:");
    scanf("%d",&age);
    switch(type){
        case 1:
        if(age<5){
            printf("$ 5000");
        }
        else if(age>5){
            printf("$ 2500");
        }
        break;
        case 2:
        if(age<5){
            printf("$ 4000");
        }
        else if(age>5){
            printf("$ 6000");
        }
        break;
    }
    return 0;
}