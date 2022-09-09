#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct empolyee
{
char empid[100];
char empname[100];
//char emploc[100];
}emp;
int main(void)
{

char name[50];
int accountno, amount;

FILE *fp;
fp=fopen("excel.xslx","r");

if(!fp)
{
printf(stderr,"\n Error opening file_path\n\n");
exit(1);
}

printf("deatils of empolyee:");
printf("\n-----------------");
for(int i=0;i<10;i++)
{
fscanf(fp,"%s %s %s\n",emp[i].empid,emp[i].empname);
printf("\n%s",ad.emp[i].empid);
printf("\t%s",ad.emp[i].empname);
//printf("\t%s",ad.emp[i].emploc);
}
printf("\n\n");


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

}

