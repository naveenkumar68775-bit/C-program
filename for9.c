#include <stdio.h>

int main() {
    int v, count = 0;
    scanf("%d", &v);
    for (int i=v;i>0; i=i/10) {
        count++;
    }
    printf("%d", count);
    return 0;
}
