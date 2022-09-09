#include<stdio.h>
#include<stdlib.h>
struct student
{
 char name[50];
 char id;
 char address[50];
};

void write()
{
    struct student std;
    FILE *fptr;
    //FILE *fptr1;

   if ((fptr = fopen("testasse.txt","w")) == NULL)
    {
       printf("error! opening file");
    // program exits if the file pointer returns null.
      exit(1);
   }

    printf("enter the student details :\n ");
    for(int i=0;i<2;i++)
    {
    printf("\n student id:");
    scanf("%s",&std.id);
    printf("\n student name:");
    scanf("%s",&std.name);
    printf("\n student address:");
    scanf("%d",&std.address);
    }
    fwrite(&std, sizeof(struct student), 1, fptr);
    //printf("id:\t %s \t\n name: %s\t\n address: %s", std.id, std.name,std.address);
    fclose(fptr);
}
void read()
{
    FILE *fptr;
    struct student std;
    char ch;
    if((fptr=fopen("testasse.txt","r"))==NULL)
    {
        printf("error opening file");
        exit(1);
    }
    printf("\nfile content:\n");
    while((ch=getc(fptr))!=EOF)
        {
        printf("%c",ch);

        }
}
int main()
{
    write();
    read();
}

