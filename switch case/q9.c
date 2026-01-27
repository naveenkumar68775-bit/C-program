#include <stdio.h>

int main() {
    int room;
    char s;

    printf("Room type: ");
    scanf("%d", &room);

    printf("A B C D: ");
    scanf(" %c",&s);

    switch(room) {
        case 1:
            if (s == 'A') {
                printf("2500");
            } else if (s == 'B') {
                printf("2000");
            }
            break;

        case 2:
            if (s == 'C') {
                printf("2000");
            } else if (s == 'D') {
                printf("3000");
            }
            break;

        default:
            printf("Invalid room");
    }
    return 0;
}
