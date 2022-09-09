#include <stdio.h>
#include <stdlib.h>

struct student
{   int id,age;
    char name,course;
};

int main()
{
   char n;
   struct student std ;
   FILE *fptr;

   if ((fptr = fopen("student.txt","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
     fread(&std, sizeof(struct student), 1, fptr);
     printf("id: %c\tname: %c\tage,: %c\n \tcourse : %c", std.id,std.name,std.age,std.course);

   fclose(fptr);

   return 0;
}
