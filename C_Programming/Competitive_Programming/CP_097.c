//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Alternate_Even_Odd_Number_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 even numbers in odd rows and odd numbers
//                 in even rows.
//
//  Example:
//      Input  : 4 5
//      Output : 2  4  6  8  10
//               1  3  5  7  9
//               2  4  6  8  10
//               1  3  5  7  9
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCount = 1;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t", ((j * 2) - 1));                
            }
            else
            {
                printf("%d\t", j * 2);
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