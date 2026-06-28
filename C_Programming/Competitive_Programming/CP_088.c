//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Reverse_Column_Number_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 column numbers in reverse order for
//                 each row.
//
//  Example:
//      Input  : 3 5
//      Output : 5  4  3  2  1
//               5  4  3  2  1
//               5  4  3  2  1
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}