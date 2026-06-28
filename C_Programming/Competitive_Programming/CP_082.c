//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Reverse_Number_Hash_Pattern
//
//  Description  : This program accepts a number from the user
//                 and displays numbers in reverse order,
//                 followed by the '#' symbol after each number.
//
//  Example:
//      Input  : 5
//      Output : 5 #  4 #  3 #  2 #  1 #
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}