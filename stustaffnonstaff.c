#include<stdio.h>
int main()
{
struct student//create a student structure
{//student structure having address
    char Stuname[255];
    char Stuid[20];
    char Stuage[20];
    //char Stuage[20];

};
    //char Edesignation[255];

    struct  staff //access with in a struct , create a structure

    {
        char Sid[20];
        char Sname[255];
    };


    struct nonstaff//create a non staff structure
    {
        char Nid[255];//create array in character type
        char Nname[255];
    };

    struct admin// in this structure acces the all structure
    {
     struct student  std[4];
     struct staff  st[4];
     struct nonstaff  nst[4];

}ad;
//create structure  variable
//struct admin ad;// declare  structure variable
int i;

for(i=0;i<2;i++)
{

printf("enter the student  details #%d:\n",(i+1));
printf("........................................\n");
printf("\nStuname:");
gets(ad.std[i].Stuname);
printf("\nstuid:");
gets(ad.std[i].Stuid);
printf("\nSage:");
gets(ad.std[i].Stuage);
printf("\nenter the staff deatails");
printf("\nsname:");
gets(ad.st[i].Sname);
printf("\nsid:");
gets(ad.st[i].Sid);
printf("\nenter the nonstaff deatails");
printf("\nnname:");
gets(ad.nst[i].Nname);
printf("\nnid:");
gets(ad.nst[i].Nid);

}
for(i=0;i<2;i++)
{
printf("\ndisplay the employee details #d\n",i+1);
printf("\nsname:%s",ad.std[i].Stuname);
printf("\nsid:%s",ad.std[i].Stuid);
printf("\nSage:%s",ad.std[i].Stuage);
printf("\nSname:%s",ad.st[i].Sname);
printf("\nSid:%s",ad.st[i].Sid);
printf("\nNname:%s",ad.nst[i].Nname);
printf("\nNid:%s",ad.nst[i].Nid);
}

}
