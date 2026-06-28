//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Alternate_Positive_Negative_Number_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 positive numbers in odd rows and
//                 negative numbers in even rows.
//
//  Example:
//      Input  : 4 5
//      Output : 1   2   3   4   5
//               -1  -2  -3  -4  -5
//               1   2   3   4   5
//               -1  -2  -3  -4  -5
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t", -j);                
            }
            else
            {
                printf("%d\t", j);
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