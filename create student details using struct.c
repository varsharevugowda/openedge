#include <stdio.h>
#include <stdlib.h>

struct student
{
   int id[10];
   char name[20] ;
   int age[10];
   char course[30];
};
int main()
{
    int ch;
    int n;
    struct student std;
    FILE *fptr;
    FILE *fptr1;

   if ((fptr = fopen("student.txt","w")) == NULL){
       printf("error! opening file");

      // program exits if the file pointer returns null.
      exit(1);
   }

        for(n = 1; n < 2; n++)
{
    printf("enter the student details :\n ");
    printf("\n student id:");
    scanf("%d",std.id);
    printf("\n student name:");
    scanf("%s",&std.name);
    printf("\n student age:");
    scanf("%d",std.age);
    printf("\n student course:");
    scanf("%s",&std.course);
}



          fwrite(&std, sizeof(struct student), 1, fptr);
          fclose(fptr);

          fopen("student.txt","r");

    printf("\nfile content:\n");

    for(n = 1; n <2; n++)
   {
     fread(&std, sizeof(struct student), 1, fptr);
     printf("id:\t %d \t\n name: %s\t\n age: %d\t\n course:%s\n", std.id, std.name,std.id,std.course);
   }
//   INT SUCESS=0;
//   IF(SUCESS!=0)
//   PRINTF("\N ENTER THE FILE NAME TO REMOVE \N");
//   REMOVE("AA.TXT");


   fclose(fptr);



   fptr=fopen("student.txt","r");

   FILE *fp1,*fp2;//two pointer
    char fname1[50],fname2[50],c;//file name
    printf("enter filename to read\n");
    scanf("%s",fname1);

    //open one file for reading
    if(fp1==NULL)
    {
        printf("%s file does not exist",fname1);
        exit(0);
    }
    printf("enter the append file name \n");
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


   fptr=fopen("student.txt","r");

   int sucess=0;
sucess=rename("aaa.txt","stude1.txt");
if(sucess!=0)
    printf("\n the file is not renambed");
remove("aa.txt");

   fclose(fptr);

   printf("\n end of file");
        return 0;


}





