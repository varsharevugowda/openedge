#include <stdio.h>

#include <stdlib.h>

#include <string.h>

struct colleage1 {​​​​​

   int cid;

   char cname[20];

}​​​​​;

int main () {​​​​​

   FILE *of;

   of= fopen ("clg.txt", "w");

   if (of == NULL) {​​​​​

      fprintf(stderr, "\nError to open the file\n");

      exit (1);

   }​​​​​

   struct colleage1 inp1 = {​​​​​1, "24"}​​​​​;

   struct colleage1 inp2 = {​​​​​2, "jnnce"}​​​​​;

   fwrite (&inp1, sizeof(struct colleage1), 1, of);

   fwrite (&inp2, sizeof(struct colleage1), 1, of);

   if(fwrite != 0)

      printf("Contents to file written successfully !\n");

   else

      printf("Error writing file !\n");

   fclose (of);

   FILE *inf;

   struct colleage1 inp;

   inf = fopen ("clg.txt", "r");

   if (inf == NULL) {​​​​​

      fprintf(stderr, "\nError to open the file\n");

      exit (1);

   }​​​​​

   while(fread(&inp, sizeof(struct colleage1), 1, inf))

      printf ("cid = %d cname = %s\n", inp.cid, inp.cname);

   fclose (inf);

}​​​​​

