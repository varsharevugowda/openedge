#include <stdio.h>
#include <stdlib.h>

int main(void)
{
// struct person with 3 fields
struct colleage
{
    int id;
    char cname[20];
    char address[20];
    //char dname[20];

}clg;
struct faculty
{
    char facname[30];
    char facid[30];
}fac;
struct admin
{
    struct colleage clg[30];
    struct faculty fac[30];
}ad;
FILE *fptr;
fptr=fopen("mmm.txt","r");
if(fptr==NULL)
{
    printf(stderr,"\n enter mmm.txt\n");
    exit(1);
}
int i=0;
for(int i=0;i<3;i++)
{
    fscanf(fptr,"%s %s %s %s \n",&ad.clg[i].cname,&ad.clg[i].address,&ad.fac[i].facname,&ad.fac[i].facid);
    printf("\n %s",ad.clg[i].cname);
    printf("\n %s",ad.clg[i].address);
    printf("\n %s",ad.fac[i].facname);
    printf("\n %s\n",ad.fac[i].facid);
}
//for(int i=0;i<3;i++)



while(fread(&ad,sizeof(struct admin),1,fptr))
{
    fprintf("colleage name =%c address =%c fac name =%c facid=%c",&ad.clg[i].cname,&ad.clg[i].address,&ad.fac[i].facname,&ad.fac[i].facid);
}

fclose(fptr);
}
