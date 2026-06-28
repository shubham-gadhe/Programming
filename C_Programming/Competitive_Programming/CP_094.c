//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Reverse_Row_Number_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 row numbers in reverse order, repeating
//                 each number across all columns.
//
//  Example:
//      Input  : 4 5
//      Output : 4  4  4  4  4
//               3  3  3  3  3
//               2  2  2  2  2
//               1  1  1  1  1
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1; i--)
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