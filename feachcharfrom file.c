#include<stdio.h>
//#define N_CHARS 10
int main()
{
   // fname means file name
char ch[100],fname[20];//create a buffer with enough size
int n,cnt;
printf("enter the number of character to read from the  file: ");
scanf("%d",&n);

FILE*fp;
FILE*fn;
printf("enter the name of file:\n");
scanf("%20s",fname);//get a string with max 20 char from stdin
for(int i=0;i<n;i++)
{

fp=fopen(fname,"r");
if(fread(ch,1,n,fp)==n)//1 is a default this the function read the file and store in the ch //fp pointing to the file all (n)number of  charcarte paseed to the ch//5,file name particular displayed{
ch[n] ='\0';//null terminate before printing // internal operation
puts(ch);
}
if(fp==NULL)
{
    printf("file doesnot exits");
}
   fclose(fp);

//fn=fopen("margin.t","w");
//cnt=0;
//while((ch=getc(fp))!=EOF)
//    {
//    if(cnt<=n)
//    {
//        fputc(ch,fn);
//        printf("%c",ch);
//        cnt++;
//    }else{
//    fputc(ch,fn);
//    while(ch!='\t'||ch!='\0'||ch!='\n'||ch!='')
//    {
//        fputc(ch,fn);
//
//    }
//    if(ch=='\t'||ch=='\0'||ch=='\n'||ch=='')
//    {
//        fputc('\n',fn);
//    }
//    cnt=0;
//    printf('\n');
//
//    }
}
//fclose(fp);




