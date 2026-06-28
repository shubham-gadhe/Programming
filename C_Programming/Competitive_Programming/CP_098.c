//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Alternate_Alphabet_Number_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 lowercase alphabets in odd rows and
//                 column numbers in even rows.
//
//  Example:
//      Input  : 4 5
//      Output : a  b  c  d  e
//               1  2  3  4  5
//               a  b  c  d  e
//               1  2  3  4  5
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'a'; j <= iCol; j++, ch++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t", j);                
            }
            else
            {
                printf("%c\t", ch);
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