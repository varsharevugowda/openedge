#include <stdio.h>

int main()
{
    int Array[10], Position, i, Size;

    printf("\n Please Enter Number of element : ");
    scanf("%d", &Size);

    printf("\n Please Enter %d elements of an Array : ", Size);
    for (i = 0; i < Size; i++)
    {
        scanf("%d", &Array[i]);
    }

    printf("\n Please Ente Delete posiyion : ");
    scanf("%d", &Position);

    if(Position < 0 || Position >= Size)
    {
        printf("\n Please Enter a Valid Index Position between 0 and %d", Size);
    }
    else
    {
        for (i = Position; i < Size; i++)
        {
            Array[i] = Array[i + 1];
        }
        Size--;
    }
    printf("\n  after Deleteing an Array Elemnt is : ");
    for (i = 0; i < Size; i++)
    {
        printf("%d", Array[i]);
    }
    return 0;

}
