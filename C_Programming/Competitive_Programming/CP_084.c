//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Star_Number_Hash_Pattern
//
//  Description  : This program accepts a number from the user
//                 and displays the '*' symbol, followed by
//                 the number and the '#' symbol for each
//                 count.
//
//  Example:
//      Input  : 5
//      Output : * 1 #  * 2 #  * 3 #  * 4 #  * 5 #
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t%d\t#\t", iCnt);
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