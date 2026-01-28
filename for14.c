#include<stdio.h>
int main(){
    int n,sum=0,v;
    scanf("%d",&n);
    for (int i=n;i>0;i=i/10){
        v=i%10;
        if(v%2==0){
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}