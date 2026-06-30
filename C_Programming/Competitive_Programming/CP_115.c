//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Border_Diagonal_Number_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 column numbers on the border and
//                 main diagonal.
//
//  Example:
//      Input  : 5 5
//      Output : 1  2  3  4  5
//               1  2        5
//               1     3     5
//               1        4  5
//               1  2  3  4  5
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Parameter \n");
        printf("Number of Rows and Columns should be same.");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || j == 1 || i == j || i == iRow || j == iCol)
            {
                printf("%d\t", j);
            }
            else
            {
                printf(" \t");
            }            
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