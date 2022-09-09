#include<stdio.h>
void passarray(int a[],int size)//create array and usser define function
{
int i;
printf("enter the value:\n");
for(i=0;i<size;i++)
{
    printf("%d",a[i]);
}
}
void main()//calling function
{
int a[7];//passed array
passarray(a,7);
}
