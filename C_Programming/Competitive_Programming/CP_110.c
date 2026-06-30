//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Right_Number_Triangle_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 a right-aligned number triangle.
//
//  Example:
//      Input  : 4 4
//      Output : 1  2  3  4
//                  2  3  4
//                     3  4
//                        4
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
            if(i > j)
            {
                printf(" \t");                
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