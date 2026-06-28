//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Row_Number_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 the corresponding row number in each
//                 column of that row.
//
//  Example:
//      Input  : 5 4
//      Output : 1  1  1  1
//               2  2  2  2
//               3  3  3  3
//               4  4  4  4
//               5  5  5  5
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", i);
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