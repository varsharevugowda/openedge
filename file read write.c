#include<stdio.h>

int main(void)
{
    FILE *fptr;//create file
    char ch;//declare character
    fptr=fopen("varshitha.txt","w");//open the file in a write mode

    printf("\nenter  multiple content :\n");//print the one msg
    //
    while((ch=getchar())!='\n')//check the condition
    {
        //write charactrr ch in file
        putc(ch,fptr);
    }
    fclose(fptr);// close the file

    fopen("varshitha.txt","r");
    printf("\nfile content:\n");
    while((ch=getc(fptr))!=EOF){
        printf("%c",ch);

    }
        printf("\n end of file");
        fclose(fptr);
        return 0;
    }


