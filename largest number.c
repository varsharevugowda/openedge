#include<stdio.h>
int main()
{
int a,b,c;
printf("enter three numbers:");
scanf("%d%d%d", &a, &b, &c);
if(a<b && a<c)
{
 printf("smallest is %d", a);
}
else if(b<c)
{
  printf("smallest is %d", b);
}
else
{
 printf("smallest is %d", c);
}
}