//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Alphabet_Column_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 alphabets from 'A' onwards in each row.
//
//  Example:
//      Input  : 4 4
//      Output : A  B  C  D
//               A  B  C  D
//               A  B  C  D
//               A  B  C  D
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
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