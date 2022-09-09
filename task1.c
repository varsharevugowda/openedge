#include<stdio.h>
#include<stdlib.h>

int main()
{

struct colleage
{
    char cname[50];
    char caddress[100];
};

    struct department
    {
        char depname[100];
        char depstaff[100];
        char dephod[100];
    };
    struct staff
    {
        char sname[30];
        //char designation[30];
        char handlesub[40];

    };

    struct clgdetails
    {
        struct colleage clg[100];
        struct department dep[100];
        struct staff   st[100];

   }clgd;

//create structure
    FILE *fptr;
    int ch;//create file

   if ((fptr = fopen("t2.txt","w")) == NULL)//if file is not there
    {
       printf("error! opening file");

      // program exits if the file pointer returns null.
      exit(1);
   }
for(int i=0;i<2;i++)
{

printf("enter the colleage  details #%d:\n",(i+1));
printf("........................................\n");
printf("\ncolleage name:");
gets(clgd.clg[i].cname);
printf("\ncolleage address:");
gets(clgd.clg[i].caddress);

printf("\ndepartement name:");
gets(clgd.dep[i].depname);
printf("\ndepartment staff num: ");
gets(clgd.dep[i].depstaff);
printf("\nHOD name:");
gets(clgd.dep[i].dephod);
printf("\nenter the staff deatails");
printf("\nstaff name:");
gets(clgd.st[i].sname);
printf("\nstaff handles sub name:");
gets(clgd.st[i].handlesub);

}
fwrite(&clgd, sizeof(struct clgdetails), 3, fptr);
fclose(fptr);

}
//FILE *fptr1;
//fptr1=fopen("t3.txt","r");
//    printf("\nfile content:\n");
//
//fread(&clgd, sizeof(struct clgdetails), 3, fptr1);
//
//for(int i=0;i<2;i++)
//{
//printf("\ndisplay colleage  details #%d:\n",(i+1));
//printf("........................................\n");
////printf("\ncolleage name:");
//printf("\n colleage name :%s",clgd.clg[i].cname);
////printf("\ncolleage address:");
//printf("\n colleage address:%s",clgd.clg[i].caddress);
////printf("\ndepartement name:");
//printf("\n department name:%s",clgd.dep[i].depname);
//printf("\ndepartment staff num: %s",clgd.dep[i].depstaff);
////gets(clgd.dep[i].depstaff);
////printf("\nHOD name:");
//printf("\n HOD name:%s",clgd.dep[i].dephod);
////printf("\nenter the staff deatails");
//printf("\nstaff name:%s",clgd.st[i].sname);
////gets(clgd.st[i].sname);
//printf("\nstaff handles sub name:%s",clgd.st[i].handlesub);
////gets(clgd.st[i].handlesub);
//
//}
//
//while((ch=getc(fptr1))!=EOF){
//        printf("%c",ch);
//   }
//        printf("\n end of file");
//        fclose(fptr1);
//        return 0;
//fclose(fptr1);
//
//}
