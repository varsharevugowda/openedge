#include<stdio.h>
#include<conio.h>
int main()
{
struct employee
{
    char eid[30];
    char ename[30];
    char address[30];
    char salary[30];
};
struct department
{
    char did[20];
    char dname[30];

};
struct admin
{
    struct employee emp[3];
    struct department dp[3];
}ad;

FILE *fptr ;
FILE *fptr1;
fptr=fopen("employee.txt","r");
fptr1=fopen("department.txt","r");
if(fptr==NULL)
{
    printf(stderr,"\n enter employee.txt\n");
    exit(1);
}
if(fptr1==NULL)
{
    printf(stderr,"\n enter department.txt");
    exit(1);
}
int i=0;
printf("\ntotal number of employee and department\n");
printf(".eid   ename    address  \t salary  did  dname.......");
printf("\n.........................................................\n");

for(i=0;i<5;++i)
{
    fscanf(fptr,"%s %s %s %s \n",&ad.emp[i].eid,&ad.emp[i].ename,&ad.emp[i].address,&ad.emp[i].salary);
    fscanf(fptr1,"%s %s\n",&ad.dp[i].did,&ad.dp[i].dname);
    printf(" %s",ad.emp[i].eid);
    printf("\t %s",ad.emp[i].ename);
    printf("\t %s",ad.emp[i].address);
    printf("\t %s",ad.emp[i].salary);
    printf("\t %s",ad.dp[i].did);
    printf("\t %s\n",ad.dp[i].dname);
}
while(fread(&ad,sizeof(struct admin),1,fptr))
{
    printf("eid=%s ename=%s address=%s salary=%s",&ad.emp[i].eid,&ad.emp[i].ename,&ad.emp[i].address,&ad.emp[i].salary);
}
while(fread(&ad,sizeof(struct admin),1,fptr1))
{
    printf("dname=%s did=%s",&ad.dp[i].did,&ad.dp[i].dname);
}

fclose(fptr);
fclose(fptr1);


}


