//it will contine end of the file is a append
#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;//two pointer
    char fname1[50],fname2[50],c;//file name
    printf("enter filename to read \n");
    scanf("%s",fname1);

    //open one file for reading
    if(fp1==NULL)
    {
        printf("%s file does not exist",fname1);
        exit(0);
    }
    printf("enter the append ");
    scanf("%s",fname2);
    fp2=fopen(fname2,"a");
    if(fp2==NULL)
    {
    printf("%s file does not exist",fname2);
    exit (0);
    }
    c=fgetc(fp1);
    while(c!=EOF)
    {

        fputc(c,fp2);
        c=fgetc(fp1);
    }
    printf("\n content in %s appended to %s",fname1,fname2);
    fclose(fp1);
    fclose(fp2);
    return 0;

}

