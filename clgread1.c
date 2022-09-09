
// Driver program
#include <stdio.h>
#include <stdlib.h>

// struct person with 3 fields
struct colleage
{
    int id;
    char cname[20];
    char address[20];
    char dname[20];

};
int main ()
{
    FILE *fp;
    struct colleage clg;

    // Open person.dat for reading
    fp = fopen ("clg.txt", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }
int i=0;
    // read file contents till end of file
    while(fread(&clg, sizeof(struct colleage), 1, fp))
        printf ("id = %d \n cname = %s \n address=%s \n dname=%s\n", clg.id,
        clg.cname,clg.address,clg.dname);

    // close file
    fclose (fp);

    return 0;
}
