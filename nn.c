#include<stdio.h>
void swap(char *str1, char *str2)
{
  char *temp = str1;
  str1 = str2;
  str2 = temp;
    printf("\n after swap \n str1 is %s, str2 is %s \n ", str1, str2);

}

int main()
{
  char *str1 = "varsha";
  char *str2 = "gowda";
  swap(str1, str2);
  printf("\n before swap \n str1 is %s, str2 is %s \n ", str1, str2);
  getchar();
  return 0;
}
