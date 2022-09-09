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

   if ((fptr = fopen("student.txt","w")) == NULL){
       printf("error! opening file");

      // program exits if the file pointer returns null.
      exit(1);
   }

        for(n = 1; n <= 2; n++)
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

    for(n = 1; n <= 2; n++)
   {
     fread(&std, sizeof(struct student), 1, fptr);
     printf("id:\t %d \t\n name: %s\t\n age: %d\t\n course:%s\n", std.id, std.name,std.id,std.course);
   }
        printf("\n end of file");
        fclose(fptr);
        return 0;
    }
