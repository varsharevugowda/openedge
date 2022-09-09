#include<stdio.h>
#include<stdlib.h>
void main()
{
  int a=10, b=20;
  int *pr1 =&a, *pr2=&b;
  printf("\n before swaping *pr1=%d,*pr2=%d \n",*pr1,*pr2);
  *pr1=*pr1+*pr2;//30
  *pr2=*pr1-*pr2;//10
  *pr1=*pr1-*pr2;//20
  printf("\n after swaping *pr1=%d,*pr2=%d \n",*pr1,*pr2);

}
