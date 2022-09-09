#include<stdio.h>

int main()
{
struct student
{
    char id[15];
    char fname[20];
    char lname[20];
    char address[10];
    float tmarks[30];
};
struct staff
{
    char sid[15];
    char sfname[20];
    char slname[20];

};
struct nonstaff
{
    char nsid[20];
    char nfname[20];
    char nlname[20];

};
struct admin
{
    struct student std[10];
    struct staff st[3];
    struct nonstaff nst[3];
};

struct admin a;
struct admin b[3];//reference of student structure
struct admin *ptr=NULL;

ptr=b;//stired in the pointer variable

for(int i=0;i<3;i++)
{
    printf("enter the student detail #%d",(i+1));
    printf("\nenter student id");
    scanf("%s",ptr->std[i].id);
    printf("\n enter student fname :");
    scanf("%s",ptr->std[i].fname);
    printf("enter student lname:");
    scanf("%s",ptr->std[i].lname);
    printf("\nenter student address:");
    scanf("%s",ptr->std[i].address);
    printf("\nenter total marks:");
    scanf("%f",&ptr->std[i].tmarks);

    printf("\nenter the staff details");
    printf("\nenter the staff id:");
    scanf("%s",ptr->st[i].sid);
    printf("\nenter the staff first name:");
    scanf("%s",ptr->st[i].sfname);
    printf("\nenter the staff last name:");
    scanf("%s",ptr->st[i].slname);

    printf("\nenter the non staff details");
    printf("\nenter the non staff id:");
    scanf("%s",ptr->nst[i].nsid);
    printf("\nenter the non staff first name:");
    scanf("%s",ptr->nst[i].nfname);
    printf("\nenter the non staff last name:");
    scanf("%s",ptr->nst[i].nlname);

    ptr++;
}
ptr=b;
printf("result via admin");
for(int i=0;i<3;i++)
{
    printf("\nenter the student details #%d",(i+1));
    printf("\nid:%s",ptr->std[i].id);
    printf("\nfname :%s",ptr->std[i].fname);
    printf("\nlname :%s",ptr->std[i].lname);
    printf("\naddress:%s",ptr->std[i].address);
    printf("\ntmarks:%f",ptr->std[i].tmarks);

    printf("\nsid :%s",ptr->st[i].sid);
    printf("\nsfname:%s",ptr->st[i].sfname);
    printf("\nslname:%s",ptr->st[i].slname);

    printf("\nnsid:%s",ptr->nst[i].nsid);
    printf("\nnfname:%s",ptr->nst[i].nfname);
    printf("\nnlname:%s",ptr->nst[i].nlname);

    ptr++;
}
return 0;
}
