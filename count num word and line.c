#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *file;//create file
    char ch;// declare character
    int character, word,line;//declare the character and word and line
    character=word=line=0;//this value assign 0
    char fname[30];//create file name assign the 30 value
    printf("enter the file name \n");
    scanf("%s",fname);//this line read the file

    file=fopen(fname,"r");//file open in a read mode
    if(file==NULL)//if file equal to the null its go the next that is printf
    {
        printf("\n unable to open \n");//file is not there
        printf("check if file exits r not\n");
        exit(EXIT_FAILURE);
    }
    while((ch=fgetc(file))!=EOF)
    {
        character++;
        if(ch=='\n'||ch=='\0')//its count new line and null
            line++;
        if(ch==' '||ch=='\t'||ch=='\n'||ch=='\0')//its count space,tab,newline,null
            word++;
    }
    if(character>0)//character greater than 0
    {
        word++;//word increament
        line++;//line increament
    }
    printf("total character =%d\n",character);//it print the character value
    printf("total line =%d\n",line);//this line print the line value
    printf("total word =%d\n",word);//this line print the word value

    fclose(file);
    return 0;


}
