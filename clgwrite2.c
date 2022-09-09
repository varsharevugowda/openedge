#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a struct to read and write
struct colleage
{
    int id;
    char cname[20];
    char address[20];
    char fname[20];
};

int main ()
{
    FILE *fp1;

    // open file for writing
    fp1 = fopen ("clg.txt", "w");
    if (fp1 == NULL)
    {
        fprintf(stderr, "\nError opened file\n");
        exit (1);
    }

    struct colleage input1 = {1, "jnnce", "shimoga","pushpa"};
    struct colleage input2 = {2, "jnnce", "shimoga","sankya"};



    fwrite (&input1, sizeof(struct colleage), 1, fp1);
    fwrite (&input2, sizeof(struct colleage), 1, fp1);

    if(fwrite != 0)
        printf("contents to file written successfully !\n");
    else
        printf("error writing file !\n");

    // close file
    fclose (fp1);

    return 0;
}
