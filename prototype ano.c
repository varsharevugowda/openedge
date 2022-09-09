#include<stdio.h>
int add(int a, int b);
void main()
{
int result,x,y;
printf("enter the value of x and y /n");
scanf("%d%d",&x,&y);
result=add(x,y);
printf("sum is:%d",result);
}
int add(int a, int b)
{
printf("Function Defination");
a+=b;
return a;
}
