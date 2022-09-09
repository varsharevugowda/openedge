#include<stdio.h>
//#define N_CHARS 10
int main()
{
   // fname means file name
char ch[100],fname[20];//create a buffer with enough size
int n,cnt;

FILE*fp;
FILE*fn;
printf("enter the name of file:\n");
scanf("%20s",fname);//get a string with max 20 char from stdin
printf("\n enter the number of character to read from the  file:\n ");
scanf("%d",&n);
printf("\n\n");


fclose(fp);
fp=fopen(fname,"r");
if(fp==NULL)
{
    printf("file doesnot exits");
}
 //fseek(fp,45,SEEK_CUR);

 //fseek(fp,42,SEEK_END);

for(int i=0;i<n;i++)
{
if(fread(ch,1,n,fp)==n)//1 is a default this the function read the file and store in the ch //fp pointing to the file all (n)number of  charcarte paseed to the ch//5,file name particular displayed{
ch[n] ='\0';//null terminate before printing // internal operation

puts(ch);

}
fclose(fp);
}


