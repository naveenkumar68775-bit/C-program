//TOPIC 1
// #include<stdio.h>
// int main()
// {
//     printf("Hello World");
//     return 0;
// }

//2
// int main(){
//     printf("Gojo");
//     return 0;
// }

//3
// int main()
// {
//     int a=10,b=25;
//     printf("%d",a);
//     printf("\n%d",b);
//     return 0;
// }

//4
// int main(){
//     printf("Output:%.1f",3.5);
//     printf("\nOutput:%.2f",7.25);
//     return 0;
// }

//5
// int main()
// {
//     char ch='A',gh='Z';
//     printf("output:%c",ch);
//     printf("\noutput:%c",gh);
//     return 0;
// }

//6
// int main()
// {
//     int a=5,b=10;
//     printf("output:%d %d",a,b);
//     return 0;
// }

//7
// int main(){
//     printf("Output:Age:%d\n",20);
//     printf("Output:Count:%d",5);
//     return 0;
// }

//8
// int main()
// {
//     printf("Good");
//     printf("\nMorning\n");
//     printf("\nHello");
//     printf("\nWorld");
//     return 0;
// }

//TOPIC 2

//1
// #include<stdio.h>
// int main()
// {
//     int a=10,b=50;
//     printf("output:%d",a);
//     printf("\noutput:%d",b);
//     return 0;
// }

//2
// int main()
// {
//     int a=5,b=15;
//     printf("Output:%d %d",a,b);
//     return 0;
// }

//3
// int main(){
//     float p=2.5,q=6.75;
//     printf("Output:%.1f",p);
//     printf("\nOutput:%.2f",q);
//     return 0;
// }

//4
// int main()
// {
//     char c='X',h='B';
//     printf("output:%c",c);
//     printf("\noutput:%c",h);
//     return 0;
// }

//5
// int main(){
//     int n=50;
//     printf("output:%d",n);
//     n=100;
//     printf("\noutput:%d",n);
// }

//6
// int main()
// {
//     int a=5,b=10;
//     printf("output:%d",a+b);
//     int c=20+10;
//     printf("\noutput:%d",c);
//     return 0;
// }

//7
// int main()
// {
//     int a=10,b=5;
//     printf("output:%d",a-b);
//     a=20;
//     b=10;
//     printf("\nOutput:%d",a-b);
//     return 0;
// }

//8
// int main()
// {
//     int a=4,b=5;
//     printf("Output:%d",a*b);
//     int c=10,d=5;
//     printf("\nOutput:%d",c*d);
//     return 0;
// }

//9
// int main()
// {
//     int a=20,b=5;
//     printf("Output:%d",a/b);
//     int c=50,d=10;
//     printf("\nOutput:%d",c/d);
// }

//10
// int main()
// {
//     int a;
//     scanf("%d",&a);
//     printf("Output:%d",a);
// }

// Topic 3 datatypes

// #include<stdio.h>
// int main()
// {
//     int a=10,b=99;
//     printf("output:%d",a);
//     printf("\noutput:%d",b);
//     return 0;
// }

//2 float variable

// int main()
// {
//     float a=3.5,b=8.25;
//     printf("output:%.1f\noutput:%.2f",a,b);
//     return 0;
// }

//3 double var

// int main()
// {
//     double c=12.345,d=99.999;
//     printf("output:%.3lf\noutput:%.3lf",c,d);
//     return 0;
// }

//4 char
// int main(){
//     char c='A',h='M';
//     printf("output:%c\noutput:%c",c,h);
//     return 0;
// }

//5
// int main()
// {
//     int m;
//     printf("%d",sizeof(int));
//     return 0;
// }

//6 size of float
// int main(){
//     float v;
//     printf("%d",sizeof(float));
//     return 0;
// }

//7 size of double
// int main()
// {
//     double n;
//     printf("%d",sizeof(double));
//     return 0;
// }

//8 sizeof char
// int main()
// {
//     char c;
//     printf("%d",sizeof(char));
//     return 0;
// }

//9 int to float
// int main()
// {
//     int a=10;
//     float value=a;
//     printf("output:%.1f",value);
//     return 0;
// }

// 10 store char in int
// int main()
// {
//     char c='A',d='a';
//     int value=c,dvalue=d;
//     printf("Output:%d\noutput:%d",value,dvalue);
//     return 0;
// }

// ARITHMETIC

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Input:");
//     scanf("%d%d",&a,&b);
//     int c=a+b;
//     printf("output:%d",c);
//     return 0;
// }

//2
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int c=a-b;
//     printf("Difference :%d",c);
//     return 0;
// }

//3
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     int c=a*b;
//     printf("product=%d",c);
//     return 0;
// }

//4
// int main(){
//     int a,b;
//     printf("Input:");
//     scanf("%d%d",&a,&b);
//     int c=a%b;
//     int d=a/b;
//     printf("\nRemainder :%d",c);
//     printf("\nQuotient  :%d",d);
//     return 0;
// }

//5
// int main()
// {
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     int t=a+b+c;
//     printf("\nOutput:%d",t);
//     return 0;
// }

//TOPIC: Increment/Decrement operator

//1 pre increment
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Input:");
//     scanf("%d",&n);
//     n++;
//     printf("Output:%d",n);
//     return 0;
// }

//2 post increment
// int main()
// {
//     int a;
//     printf("Input:");
//     scanf("%d",&a);
//     printf("Output:%d",a++);
//     return 0;
// }

//3 pre decrement
// int main()
// {
//     int r;
//     printf("Input:");
//     scanf("%d",&r);
//     printf("Output:%d",--r);
//     return 0;
// }

//4 increment twice

// int main()
// {
//     int r;
//     printf("Input:");
//     scanf("%d",&r);
//     r=++r;
//     printf("Output:%d",++r);
//     return 0;
// }

//5 decrement twice
// int main()
// {
//     int v;
//     printf("Input:");
//     scanf("%d",&v);
//     v=--v;
//     printf("Output:%d",--v);
//     return 0;
// }

//TOPIC Relational operator

// 1 >
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("output:%d",a>b);
//     return 0;
// }

//2  <
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("output:%d",a<b);
//     return 0;
// }

//3 ==
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("output:%d",a==b);
//     return 0;
// }

//4  !=
// #include<stdio.h>
// int main(){
//     int p,q;
//     scanf("%d%d",&p,&q);
//     printf("output:%d",p!=q);
//     return 0;
// }

//5  >= && =<
// #include<stdio.h>
// int main(){
//     int a,b;
//     scanf("%d%d",&a,&b);
//     printf("output:a=%d b=%d",a>=b , a<=b);
//     return 0;
// }

//Logical 

//1  AND
// #include<stdio.h>
// int main()
// {
//     int p,q;
//     scanf("%d%d",&p,&q);
//     printf("output:%d",p&&q);
//     return 0;
// }

//2 OR
// #include<stdio.h>
// int main()
// {
//     int p,q;
//     scanf("%d%d",&p,&q);
//     printf("output:%d",p||q);
//     return 0;
// }

//3 NOT on zero
// #include<stdio.h>
// int main()
// {
//     int p;
//     scanf("%d",&p);
//     printf("output:%d",!p);
//     return 0;
// }

//4 NOT an non-zero
// #include<stdio.h>
// int main()
// {
//     int p;
//     scanf("%d",&p);
//     printf("output:%d",!p);
//     return 0;
// }
