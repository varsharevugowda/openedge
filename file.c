#include<stdio.h>

int main(void)
{

 FILE *fptr;
 char filename[255];

 printf("enter the file name");
 scanf("%s",filename);

 fptr=fopen(filename,"w");
 if(fptr!=NULL)
 {
 printf("file created succesfully");
 fclose(fptr);

 }
 else{
 printf("failed to create file");
 }
 return 0;
 }
