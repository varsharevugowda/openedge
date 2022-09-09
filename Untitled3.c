#define _POSIX_SOURCE 200809L // getline is not standard ISO C, but rather part of POSIX.
#include <stdio.h> // getline
#include <stdlib.h> // free

int main()
{



FILE *f = stdin;
char *line = NULL;
size_t len = 0;
ssize_t nread;

while (nread = getline(&line, &len, f))!= 1)
{
    // Note that the newline \n is always stored unless it reached EOF first.
    // len stores the current length of the buffer, and nread stores the length of the current string in the buffer. getline() grows the buffer for you whenever it needs to.
    printf("New line read: %s", line);
}

// It's the programmer's job to free() the buffer that getline() has allocated
free(line);
}
