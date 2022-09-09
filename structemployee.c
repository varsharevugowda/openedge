#include<stdio.h>
int main()
{
struct employeeDetails
{//student structure having address
    char Ename[255];
    char Eid[20];
    char Edesignation[255];

    struct//access with in a struct
    {
        char did[20];
        char dname[255];

    }department;
    struct
    {
        char dv1[255];//create array in character type
        char dv2[255];
    }division;
};
//create structure  variable
struct employeeDetails emp;
//printf("emp detail #%d\n",(i+1))
printf("enter the employee details:\n");
printf("Ename:\n");
gets(emp.Ename);
printf("Eid:\n");
gets(emp.Eid);
printf("Edesignation:\n");
gets(emp.Edesignation);

printf("\n enter the department details:\n");
printf("did:\n");
gets(emp.department.did);
printf("dname:\n");
gets(emp.department.dname);

printf("enter the department devision\n");
printf("Dv1:\n");
gets(emp.division.dv1);
printf("Dv2:");
gets(emp.division.dv2);

printf("display the employee details\n");
printf("\nEname:%s",emp.Ename);
printf("\nEid:%s",emp.Eid);
printf("\nEdesignation:%s",emp.Edesignation);
printf("\ndis:%s",emp.department.did);
printf("\ndname:%s",emp.department.dname);
printf("\ndv1:%s",emp.division.dv1);
printf("\ndv2:%s",emp.division.dv2);



}
