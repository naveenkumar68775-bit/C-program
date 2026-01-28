#include <stdio.h>
int main() {
    int sum=0,n,v,p;
    scanf("%d", &n);
    p=n; 
    for (; n>0;n=n/10) {
        v = n % 10;
        sum=sum + (v*v*v);
    }
    if (sum==p) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}
