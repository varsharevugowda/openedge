#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee
    {
        char eid[30];
        char ename[40];
        //char address[40];

    }emp;
struct department
    {
        char did[30];
        char dname[40];
    };
struct admin
    {
        struct employee emp[3];
        struct department dp[2];
    }a;
int main(void)
{
    FILE *f1,*f2;

    f1=fopen("e.txt","r");
    f2=fopen("d.txt","r");
    if(f1==NULL)
    {
        fprintf(stderr,"file not open");
                exit(1);

    }
    if(f2==NULL)
    {
        fprintf(stderr,"file not open");
        exit(1);
    }
    printf("*********************************\n");
    printf("deatils of empolyee:");
    printf("\n*********************************");
    for(int i=0;i<10;i++)
    {
        fscanf(f1,"%s %s",&a.emp[i].eid,&a.emp[i].ename);//&a.emp[i].address);
        printf("\n%s",a.emp[i].eid);
        printf("\t%s",a.emp[i].ename);
        //printf("\t%s",a.emp[i].address);
    }
    printf("\n\n");
    printf("*********************************\n");
    printf("deatils of department:");
    printf("\n*********************************");

    for(int i=0;i<10;i++)
    {
        fscanf(f2,"%s %s",&a.dp[i].did,&a.dp[i].dname);
        printf("\n%s",a.dp[i].did);
        printf("\t%s",a.dp[i].dname);
    }
    //fclose(f2);
    FILE *f3;
    f3=fopen("o.txt","w");
    if(f3==NULL)
    {
        printf("error");
       // exit(1);
    }
    for(int i=0;i<4;i++)
    {
        fprintf(f3,"%s %s",&a.emp[i].eid,&a.emp[i].ename);//&a.emp[i].address);
    }
    for(int i=0;i<4;i++)
    {
        fprintf(f3,"%s %s",&a.dp[i].did,&a.dp[i].dname);
    }
char id[100],found;
printf("\n enter the employee id for searching: ");
scanf("%s",&id);
for(int i=0;i<10;i++)
{
if(strcmp(a.emp[i].eid,id)==0)
{
    found=1;
printf("record found\n");
printf("%s %s",&a.emp[i].eid,&a.emp[i].ename);
//printf("%s ",a.emp[i].address);
printf("\n");
return;
}
}
if(found!=1)
printf("record not found");


char id1[100];
printf("\n enter the department id for searching: ");
scanf("%s",&id1);
for(int i=0;i<10;i++)
{
if(strcmp(a.dp[i].did,id1)==0)
{
    found=1;
printf("record found\n");
printf("%s %s",&a.dp[i].did,&a.dp[i].dname);
//printf("%s ",a.emp[i].address);
printf("\n");
return;
}
}
if(found!=1)
printf("record not found");
}

