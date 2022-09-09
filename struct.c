#include <stdio.h>
#include <stdlib.h>

struct threenum
{
   int n1, n2, n3;
};
int main()
{
   int n;
     struct threenum num;
    FILE *fptr;

   if ((fptr = fopen("file3.txt","w")) == NULL){
       printf("error! opening file");

      // program exits if the file pointer returns null.
      exit(1);
   }
   for(n = 1; n < 5; ++n)
   {
      num.n1 = n;
      num.n2 = 5*n;
      num.n3 = 5*n + 1;
      fwrite(&num, sizeof(struct threenum), 1, fptr);
  }
  fclose(fptr);

   return 0;
}

