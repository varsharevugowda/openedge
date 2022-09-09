#include<stdio.h>
int main()
{
if(remove("z.txt")==0)//file is there its goto check the first printf
{
    printf("the file remove sucessfully");
}
else
    {
        printf("the file does not exits ");
    }
}
