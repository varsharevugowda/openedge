#include<stdio.h>
#define N_CHARS 10
void chara()
{
   // fname means file name
   //FILE *file;
char ch[100],fname[20];//create a buffer with enough size
int n;
printf("enter the number of character to read from the  file: ");
scanf("%d",&n);

FILE*fp;
printf("enter the name of file:\n");
scanf("%20s",fname);//get a string with max 20 char from stdin

fp=fopen(fname,"r");
if(fread(ch,1,n,fp)==n)
ch[n] ='\0';
puts(ch);

fclose(fp);

}
void line()
{
    FILE *fp1;
    int line=0;
    char fname1[40];
    char chr;
    printf("enter the file name:\n");
    scanf("%s",fname1);
    fp1=fopen(fname1,"r");
    chr=getc(fp1);
    while(chr!=EOF)
    {
        if(chr=='n')
        {
            line=line+1;
        }
    }chr=getc(fp1);
    fclose(fp1);
    printf("there are %d linesin %s in afile",line,fname1);

}
void main()
{
    chara();
    line();
}


