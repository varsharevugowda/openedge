#include<stdio.h>
void main()
{
int sucess=0;
sucess=rename("varshitha.txt","varshitha1.txt");
if(sucess!=0)
    printf("\n the file is not renamed");
remove("varshitha2.txt");
if(remove!=0)
    printf("\n the file does not exits");
}
