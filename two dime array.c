#include<stdio.h>
#define ROW 3
#define COL 3

void array(int a[][COL])//create array,passed array,no row no col
{
    int i,j;
    printf("2-d array\n");
    for(i=0;i<ROW;i++)//increment a[0][0]
    {
        for(j=0;j<COL;j++)//a[0][0] inner loop
        {
            printf("%d",a[i][j]); // two dimension array
        }
        printf("\n");
    }
}
void main()
{
    //add(10);
    //int x=10;
    //add(x);
    int arr[ROW][COL]=
    {
        {
            1,2,3 //1 row element
        },
        {
            4,5,6 //2
        },
        {
            7,8,9
        }
    };//passed array
    array(arr);
}
