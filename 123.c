#include<stdio.h>
#include<conio.h>
void content()
{
    char fname[20], str[500];
    FILE *fp;
    printf("Enter the Name of File: ");
    gets(fname);
    fp = fopen(fname, "r");
    if(fp==NULL)
        printf("Error Occurred while Opening the File!");
    else
    {
        fscanf(fp, "%[^\0]", str);
        printf("\nContent of File is:\n\n");
        printf("%s", str);
    }
	fclose(fp);
    getch();
    return 0;
}
void read()
{
    char fname[20], str[200];
    FILE *fp;
    printf("\nEnter the Name of File: \n");
    gets(fname);
    fp = fopen(fname, "r");
    if(fp==NULL)
        printf("Error Occurred while Opening the File!");
    else
    {
        fscanf(fp, "%[^\n]", str);
        printf("\nFile's Content at First Line:\n\n");
        printf("%s", str);
    }
    fclose(fp);
    getch();
    return 0;
}
int main()
{
content();
read();
}
