#include <stdio.h>

int main() {
    int class, age;
    int f = 0;
    scanf("%d", &class);
    scanf("%d", &age);

    switch (class) {
        case 1:  
            f = 300;
            if (age<12) {
                f=f/2;
                printf("Fare:%d", f);         
            } else if (age >= 60) {
                f=f-(f/3);
                printf("Fare:%d", f); 
            }
            break;
        case 2:  
            f=1000;
            if (age<12) {
                f=f/2;
                printf("Fare:%d", f);          
            }
            break;
        default:
            printf("Invalid");
    }
    
    return 0;
}
