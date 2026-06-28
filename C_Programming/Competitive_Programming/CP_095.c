//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Sequential_Number_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 sequential numbers in row-wise order.
//
//  Example:
//      Input  : 3 4
//      Output : 1  2  3  4
//               5  6  7  8
//               9  10 11 12
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCount = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            iCount++;
            printf("%d\t", iCount);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows and Columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}