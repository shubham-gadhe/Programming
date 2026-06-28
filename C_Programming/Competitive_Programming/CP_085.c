//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Even_Numbers
//
//  Description  : This program accepts a number from the user
//                 and displays the first given count of
//                 even numbers.
//
//  Example:
//      Input  : 5
//      Output : 2  4  6  8  10
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt * 2);
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