//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Incremental_Number_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 an increasing number pattern.
//
//  Example:
//      Input  : 4 4
//      Output : 1  2  3  4
//               2  3  4  5
//               3  4  5  6
//               4  5  6  7
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCount = 0;

    for(i = 1; i <= iRow; i++)
    {
        iCount = i;

        for(j = 1; j <= iCol; j++)
        {  
            printf("%d\t", iCount); 
            iCount++;  
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