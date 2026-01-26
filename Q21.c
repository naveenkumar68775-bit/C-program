#include<stdio.h>

int main()
{
    int m, n, c, l;

    scanf("%d %d", &m, &n);
    printf("1. Add\n");
    printf("2. Sub\n");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
            l = m + n;
            printf("Result = %d", l);
            break;
        case 2:
            l = m - n;
            printf("Result = %d", l);
            break;
        default:
            printf("Invalid");
    }
    return 0;
}
