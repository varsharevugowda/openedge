#include<string.h>
#include<stdio.h>

void main()
{
    char str1[20]="welcome to c program";
    printf("\n length of string str1:%d",strlen(str1));

    char str2[20]="welcome to c program";
    printf("\n length of string str2 when max is 30:%d",strlen(str2));
    printf("\n length of string str2 when max is 10:%d",strlen(str2));

    char s1[20]="welcome to c program";
    char s2[10]="welcome to c traine";
    if(strcmp(s1,s2)==0)
    {
        printf("\n string 1 and string 2 are equal");
    }
    else
        {
            printf("\n string 1 and string 2  are diffrent ");
        }
    char s3[20]="welcome to c program";
    char s4[20]="welcome to c program";
    if(strcmp(s3,s4)==0)
    {
        printf("\nstring 3 and string 4 are equal");
    }
    else
        {
            printf("\nstring 3 and string 4 are not  equal");

        }
    char s5[20]="HELLO";
    char s6[20]="JKTECH TRANING";
    strcat(s5,s6);
    printf("\n concatenation s5  strncat:%s",s5);

    char s9[30]="HELLO";
    char s10[30]="JKTECH";
    strcat(s9,s10);
    printf("\n concatenation s9 strncat:%s",s9);


}
