//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Alternate_Upper_Lower_Alphabet_Pattern
//
//  Description  : This program accepts the number of rows
//                 and columns from the user and displays
//                 uppercase alphabets in odd rows and
//                 lowercase alphabets in even rows.
//
//  Example:
//      Input  : 4 4
//      Output : A  B  C  D
//               a  b  c  d
//               A  B  C  D
//               a  b  c  d
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch1 = '\0', ch2 = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch1 = 'A', ch2 = 'a'; j <= iCol; j++, ch1++, ch2++)
        {
            if(i % 2 == 0)
            {
                printf("%c\t", ch2);
            }
            else
            {
                printf("%c\t", ch1);
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