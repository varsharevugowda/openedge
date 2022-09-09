#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three integer values :");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
        printf("\n a is the smallest:%d",a);
    else
    {
    if(b<c)
        printf("\n b is the smallest :%d",b);
    else
        printf("\n c is the smallest :%d",c);
    }

}
