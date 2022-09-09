#include<stdio.h>
#include<stdlib.h>

int main()
{
int num=10;

int *pr1;
int **pr2;
pr1 = &num;
pr2 =&pr1;

printf("\nvalue of num %d",num);
printf("\nvalue of pr1 %d",*pr1);
}
