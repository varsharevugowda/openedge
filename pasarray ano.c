#include<stdio.h>
#define MAX_SIZE 7
void passarray(int a[],int size)//create array and usser define function
{
int i;
printf("enter the value:\n");
for(i=0;i<size;i++)
{
    printf("enetr the value:\n");
    scanf("%d",&a[i]);
    printf("%d",a[i]);
}
}
void main()//calling function
{
int a[MAX_SIZE];//passed array
passarray(a,MAX_SIZE);
for(int i=0;i<MAX_SIZE;i++)
{
printf("%d",a[i]);
}
}
