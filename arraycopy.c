#include<stdio.h>

void main()
{
int a1[100],a2[100],i,n;
int *p1=a1;
int *p2=a2;
int *l;
printf("\nEnter the array size : ");
    scanf("%d",&n);
    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p1+i));
    }
     l=&a1[n-1];

    printf("\narray elements a1 : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",*(a1+i));
    }
    printf("\narray elements a2 before copy : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",*(a2+i));
    }
    while(p1<=l)
    {
        *p2=*p1;
        p1++;
        p2++;
    }
     printf("\narray elements a2 after copying  : ");
     for(i=0;i<n;i++)
    {
        printf("%d ",*(a2+i));
    }
}
