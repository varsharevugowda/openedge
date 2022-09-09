#include<stdio.h>
int main()
{
    int ch;//create caharacter
    FILE *fp,*fq;//two pointer source and destination file
    fp=fopen("aa.txt","r");//read content of file
    fq=fopen("bb.txt","w");//in write operation automaticall created
    if(fp==NULL||fq==NULL)
        printf("file not exits ");
    else
        while((ch=fgetc(fp))!=EOF)//read cgaracter by chharacter copy into a bb.txt end of file come out of the loop
    {
     fputc(ch,fq);
    }
    printf("file copies.....");
    return 0;
}
