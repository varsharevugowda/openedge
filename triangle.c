#include <stdio.h>

void main()
{
    int i,j,rows,k=1;
    printf("input number of rows : ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");

    }
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
    }
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");

    }
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
    }
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",i);
        printf("\n");
    }
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        printf("%d",k++);
        printf("\n");
    }
}
