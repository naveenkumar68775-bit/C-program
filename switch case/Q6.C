#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    int t,s=0;
    printf("type:");
    scanf("%d",&t);
    switch(t){
        case 1:
        s=50;
        printf("rs:%d",s);
        break;
        case 2:
        s=100;
        if(r<1000){
            printf("rs:%d",s);
        }
        else{
            printf("Free");
        }
        break;
    }
    return 0;

}