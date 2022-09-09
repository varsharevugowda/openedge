#include <stdio.h>

void swap (int a, int b) {

  int temp;

  temp = a;
  a = b;
  b = temp;

  printf("After swapping first number is %d and second number is %d", a ,b);

}

int main(void) {

  int first, second;

  printf("Enter two numbers : \n");
  scanf("%d %d",&first,&second);

  swap(first,second);

  /* Check whether actual parameters is changed after swapping. */

  printf(" \n After swap function called first number is %d and second number is %d", first ,second);

  return 0;
}
