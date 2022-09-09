#include <stdio.h>
#include <stdlib.h>

struct student
{
   int id[10];//declare the id
   char name[20] ;//name
   int age[10];//age
   char course[30];//cource
};
int main()//main method
{
    int ch;//
    int n;
     struct student std;//create structure
    FILE *fptr;//create file

   if ((fptr = fopen("student.txt","w")) == NULL)//if file is not there
    {
       printf("error! opening file");

      // program exits if the file pointer returns null.
      exit(1);
   }

        for(n = 0; n < 2; n++)//this check until the statement meets

{
    //printf("enter the student details :\n ");
    printf("\n student id:");
    scanf("%d",&std.id);
    printf("\n student name:");
    scanf("%s",&std.name);
    printf("\n student age:");
    scanf("%d",&std.age);
    printf("\n student course:");
    scanf("%s",&std.course);
}

          fwrite(&std, sizeof(struct student), 1, fptr);
          fclose(fptr);

          fopen("student.txt","r");
          //fopen("varshitha.txt","r");
    printf("\nfile content:\n");
    while((ch=getc(fptr))!=EOF){
        printf("%c",ch);
    }
        printf("\n end of file");
        fclose(fptr);
        return 0;



}




