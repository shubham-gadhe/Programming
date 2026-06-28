//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Number_Star_Pattern
//
//  Description  : This program accepts a number from the user
//                 and displays numbers from 1 up to the given
//                 count, followed by the '*' symbol after
//                 each number.
//
//  Example:
//      Input  : 5
//      Output : 1 *  2 *  3 *  4 *  5 *
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t", iCnt);
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