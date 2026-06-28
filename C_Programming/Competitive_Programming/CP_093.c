//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Row_Wise_Alphabet_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 the same uppercase alphabet repeatedly
//                 in each row.
//
//  Example:
//      Input  : 3 5
//      Output : A  A  A  A  A
//               B  B  B  B  B
//               C  C  C  C  C
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0; 
    char ch = '\0';

    for(i = 1, ch = 'A'; i <= iRow; i++, ch++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
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