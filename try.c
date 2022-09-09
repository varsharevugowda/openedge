#include <stdio.h>

#include <stdlib.h>

#include <string.h>

struct Student5 {​​​​​

   int roll_no;

   char name[20];

}​​​​​;

int main () {​​​​​

   FILE *of;

   of= fopen ("File1.txt", "w");

   if (of == NULL) {​​​​​

      fprintf(stderr, "\nError to open the file\n");

      exit (1);

   }​​​​​

   struct Student inp1 = {​​​​​1, "Jancy"}​​​​​;

   struct Student inp2 = {​​​​​2, "Nancy"}​​​​​;

   fwrite (&inp1, sizeof(struct Student), 1, of);

   fwrite (&inp2, sizeof(struct Student), 1, of);

   if(fwrite != 0)

      printf("Contents to file written successfully !\n");

   else

      printf("Error writing file !\n");

   fclose (of);

   FILE *inf;

   struct Student inp;

   inf = fopen ("File1.txt", "r");

   if (inf == NULL) {​​​​​

      fprintf(stderr, "\nError to open the file\n");

      exit (1);

   }​​​​​

   while(fread(&inp, sizeof(struct Student), 1, inf))

      printf ("roll_no = %d name = %s\n", inp.roll_no, inp.name);

   fclose (inf);

}​​​​​

