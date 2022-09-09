#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct clg{
   int cid;
   char cname[20];
   char  dname[20];
   int dstaffsize;
};
int main () {
    struct clg c;
    char ch;
//   FILE *of;
//   of= fopen ("clg.txt", "w");
//   if (of == NULL) {
//      fprintf(stderr, "\nError to open the file\n");
//      exit (1);
//   }
//   struct clg inp1 = {1, "jnnce","CS",24};
//   struct clg inp2 = {2, "jnnce","CS",24};
//   fwrite (&inp1, sizeof(struct clg), 1, of);
//   fwrite (&inp2, sizeof(struct clg), 1, of);
//   if(fwrite != 0)
//      printf("Contents to file written successfully !\n");
//   else
//      printf("Error writing file !\n");
//   fclose (of);
   FILE *fp;
   char fname[30];
   //struct clg inp;
   fp=fopen("clg.txt","r");
   if (fp == NULL) {
      fprintf(stderr, "\nError to open the file\n");
      exit (1);
   }
   while(fread(&c, sizeof(struct clg), 1, fp))
      printf ("cid = %d cname = %s dname = %s dstaffsize = %d \n", c.cid, c.cname,c.dstaffsize);
      ch=fgetc(fp);//each character displays from the end
    printf("%c",ch);
   fclose (fp);
}
