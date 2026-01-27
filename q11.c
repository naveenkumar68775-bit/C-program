#include<stdio.h>
int main(){
    int plan;
    printf("Plantype:");
    scanf("%d",&plan);
    float us;
    printf("Usage:");
    scanf("%f",&us);
    switch(plan){
        case 1:
        if(us<1){
            printf("Normal speed");
        }
        else if(us>1){
            printf("Speed Reduced");
        }
        break;
        case 2:
        if(us<2){
            printf("Normal speed");
        }
        else if(us>2){
            printf("Extra charges");
        }
        break;
    }
    return 0;
}