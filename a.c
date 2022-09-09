
# include <stdio.h>
int main( )
{
   FILE *fp ;
   char c ;
   int n,cnt;
printf("enter the number of character to read from the  file: ");
scanf("%d",&n);
   printf( "\n Opening the file test.c in read mode\n " ) ;
   fp = fopen ( "margin.txt", "r" ) ; // opening an existing file
   if ( fp == NULL )
   {
     printf ( "Could not open file test.c" ) ;
     return 1;
   }
   printf( "Reading the file test.c" ) ;
   while ( 1 )
   {
     c = fgetc ( fp ) ; // reading the file
     if ( c == EOF )
     break ;
     printf ( "%c", c ) ;
   }
   printf("Closing the file test.c") ;
   fclose ( fp ) ; // Closing the file
   return 0;

   FILE *f = stdin;
char *line = NULL;
size_t len = 0;
ssize_t nread;

//while (nread = getline(&line, &len, f)) != 1)
{
    // Note that the newline \n is always stored unless it reached EOF first.
    // len stores the current length of the buffer, and nread stores the length of the current string in the buffer. getline() grows the buffer for you whenever it needs to.
    printf("New line read: %s", line);
}

// It's the programmer's job to free() the buffer that getline() has allocated
free(line);
}
