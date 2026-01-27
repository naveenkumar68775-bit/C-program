#include <stdio.h>

int main()
{
    int c;
    char v;

    printf("Online 1 or Offline 2: ");
    scanf("%d", &c);

    printf("Regular (R) or Scholarship (S): ");
    scanf(" %c", &v);   

    switch(c) {
        case 1:
            if(v == 'R')
                printf("$5000");
            else if(v == 'S'){
                printf("$3000");
            }
            break;

        case 2:
            if(v == 'R'){
                printf("$9000");
            }
            else if(v == 'S'){
                printf("$7000");
            }
            break;

        default:
            printf("Invalid");
    }
    return 0;
}
