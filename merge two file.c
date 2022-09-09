#include<stdio.h>
int main()
{
    FILE *fp1 = fopen("remove file.c","r");//file open in a read mode,file name remove file

    FILE *fp2 = fopen("assci.c","r");//file open in a read mode,file name assci file

    FILE *fp3 = fopen("file3.txt","w");//file open in a write mode store the value

    char c;
    if(fp1 == NULL || fp2 == NULL || fp3 == NULL)//in this 3 file one file is not exits its prit file not open
    {
        puts("file not open");
        exit(0);
    }
    while((c=fgetc(fp1))!=EOF)
        fputc(c,fp3);
    while((c=fgetc(fp2))!=EOF)
        fputc(c,fp3);
    printf("\n merged remove file.c and  assci.c into file3.txt\n\n");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
