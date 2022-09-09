#include <stdio.h>
void swap(char *n1,char *n2);

int main()
{
    char  num1 = "varsha";
    char  num2 = "gowda";

    // address of num1 and num2 is passed
    swap( &num1, &num2);

    printf("num1 = %s\n", num1);
    printf("num2 = %s \n", num2);
    return 0;
}

void swap(char * n1, char* n2)
{
    char temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
