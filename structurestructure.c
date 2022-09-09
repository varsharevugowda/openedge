#include<stdio.h>
int main()
{
struct student
{//student structure having address
    char name[255];
    char id[20];

    struct//access with in a struct
    {
        char line1[255];
        char line2[255];
        char pincode[20];
    }address;
    struct
    {
        char course1[255];//create array in character type
        char course2[255];
    }course;
};
//create structure  variable
struct student std;
//printf("stdunt detail #%d\n",(i+1))
printf("enter the student details:");
printf("name:");
gets(std.name);
printf("id:");
gets(std.id);
printf("line1:");
gets(std.address.line1);
printf("line2:");
gets(std.address.line2);
printf("course1:");
gets(std.course.course1);
printf("course2:");
gets(std.course.course2);//course2 in course structure this in the std structure


printf("display the student details");
printf("name:%s",std.name);
printf("id:%s",std.id);

printf("%s",std.address.line1);


}
