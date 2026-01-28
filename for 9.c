#include <stdio.h>

int main() {
    int N, count = 0;
    scanf("%d", &N);
    for (int i=N;i>0; i=i/10) {
        count++;
    }
    printf("%d", count);
    return 0;
}
