#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
struct empolyee
{
char empid[100];
char empname[100];
char emploc[100];
}emp;
struct department
{
char deptid[100];
char deptname[100];
char deptsubj[100];
}dept;
struct admin
{
struct empolyee emp[10];
struct department dept[10];
};
FILE *fp,*fp1;
struct admin ad;
fp=fopen("employee1.txt","r");
fp1=fopen("depart1.txt","r");
if(fp==NULL)
{
printf(stderr,"\n Error opening empolyee1.txt\n\n");
exit(1);
}
if(fp1==NULL)
{
printf(stderr,"\n Error opening depart1.txt\n\n");
exit(1);
}
printf("deatils of empolyee:");
printf("\n-----------------");
for(int i=0;i<10;i++)
{
fscanf(fp,"%s %s %s\n",&ad.emp[i].empid,&ad.emp[i].empname,&ad.emp[i].emploc);
printf("\n%s",ad.emp[i].empid);
printf("\t%s",ad.emp[i].empname);
printf("\t%s",ad.emp[i].emploc);
}
printf("\n\n");
printf("deatils of department:");
printf("\n--------------------");
for(int i=0;i<5;i++)
{
fscanf(fp1,"%s %s %s\n",&ad.dept[i].deptid,&ad.dept[i].deptname,&ad.dept[i].deptsubj);
printf("\n%s",ad.dept[i].deptid);
printf("\t%s",ad.dept[i].deptname);
printf("\t%s",ad.dept[i].deptsubj);
}

printf("\n\n");
FILE *fp2;
fp2=fopen("output.txt","w");
if(fp2==NULL)
{
printf("\n Error opening file\n");
exit(1);
}
for(int i=0;i<10;i++)
{
fprintf(fp2,"%s %s %s\n",&ad.emp[i].empid,&ad.emp[i].empname,&ad.emp[i].emploc);
}
for(int i=0;i<5;i++){
fprintf(fp2,"%s %s\n",ad.dept[i].deptid,&ad.dept[i].deptname,&ad.dept[i].deptsubj);
}
//fclose(fp2);
//depart();

char id[100],found;
printf("\n enter the employee id for searching: ");
scanf("%s",&id);
for(int i=0;i<10;i++)
{
if(strcmp(ad.emp[i].empid,id)==0)
{
    found=1;
printf("record found\n");
printf("%s %s %s",&ad.emp[i].empid,&ad.emp[i].empname,&ad.emp[i].emploc);
//printf("%s ",a.emp[i].address);
printf("\n");
return;
}
}
if(found!=1)
{
printf("record not found");
}
}
void update()
{
    printf("...................udate operation ..................");
    char uid[100];
    char name1[50];

    printf("enter the id to update:");
    scanf("%s",&uid);
    for(int i=0;i<5;i++)
    {
        if(strcmp(ad.emp[i].empid,uid)==0)
        {
            printf("record found");
            printf("enter the name to update:");
            scanf("%s",&name1);
            strcpy(ad.emp[i].empname,name1);
            printf("details after update");
            printf("%s %s %s",&ad.emp[i].empid,&ad.emp[i].empname,&ad.emp[i].emploc);
        }
    }
}

