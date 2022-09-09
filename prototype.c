#include<stdio.h>
int add(int a, int b);
void main()
{
int result;
result=add(10,20);
printf("sum is:%d",result);
}
int add(int a, int b)
{
printf("Function Defination");
a+=b;
return a;
}
