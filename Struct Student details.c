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
     struct student std;//declared structure variable
    FILE *fptr;//create file pointer

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

          fwrite(&std, sizeof(struct student), 3, fptr);
          fclose(fptr);

          fopen("student.txt","r");

    printf("\nfile content:\n");

    //for(n = 0; n < 3; n++)//this check until the statement meets
   //{
        fread(&std, sizeof(struct student), 3, fptr);

     for(n = 0; n < 2; n++)
        {
     printf("\n student id:%d",std.id);
    //scanf("%d",std.id);
    printf("\n student name:%s",std.name);
    //scanf("%s",&std.name);
    printf("\n student age:%d",std.age);
   // scanf("%d",std.age);
    printf("\n student course:%s",std.course);
        }
    //scanf("%s",&std.course);
     //printf("id:\t %d \t\n name: %s\t\n age: %d\t\n course:%s\n", std.id, std.name,std.id,std.course);
   //}//
   while((ch=getc(fptr))!=EOF){
        printf("%c",ch);
   }


        printf("\n end of file");
        fclose(fptr);
        return 0;
}




