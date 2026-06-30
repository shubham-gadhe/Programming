//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Border_Anti_Diagonal_Star_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 '*' on the border and anti-diagonal.
//
//  Example:
//      Input  : 6 6
//      Output : *  *  *  *  *  *
//               *           *  *
//               *        *     *
//               *     *        *
//               *  *           *
//               *  *  *  *  *  *
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
        for(j = iCol; j >= 1; j--)
        {
            if(i == j || i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
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