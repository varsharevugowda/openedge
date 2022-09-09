#include<stdio.h>

#define ROW 3
#define COL 3

//function declaration
void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixMultiply(int mat1[][COL],int mat2[][COL],int res[][COL]);
int main()
{
int mat1[ROW][COL];
int mat2[ROW][COL];
int product[ROW][COL];
//input element in matrices
printf("Enter element in first matrix of size %dx%d\n",ROW,COL);
matrixInput(mat1);
printf("Enter element in second matrix of size %dx%d\n",ROW,COL);
matrixInput(mat2);
//call fuction to multiply both matrices
matrixMultiply(mat1,mat2,product);
//print product of both matrix
printf("Product of both matrices is:\n");
matrixPrint(product);
return 0;
}
//function to input element in matrix from user and two dimensional array to store user input

void matrixInput(int mat[][COL])
{
int row,col;
for(row=0;row<ROW;row++)
{
for(col=0;col<COL;col++)
{
scanf("%d",(*(mat+row)+col));

}
}
}
//function to print elements in a two-dimensional array and two demensional arrayto print
void matrixPrint(int mat[][COL])
{
int row,col;
for(row=0;row<ROW;row++)
{
for(col=0;col<COL;col++)
{
printf("%d",*(*(mat+row)+col));
}
printf("\n");
}
}
//function to multiply two matrices
//@mat1 first matrix
//@mat2 first matrix
//@res Resultant matrix to store product of both matrices
void matrixMultiply(int mat1[][COL],int mat2[][COL],int res[][COL])
{
int row,col,i;
int sum;
for(row=0;row<ROW;row++)
{
for(col=0;col<COL;col++)
{
sum=0;
//find sum of product of each element of rows of first matrix and columns of second matrix
for(i=0;i<COL;i++)
{
sum+=(*(*(mat1+row)+i))*(*(*(mat2+i)+col));
}
//store sum of product of row of first matrix and column of second matrix to resultant matrix
*(*(res+row)+col)=sum;
}
}
}
