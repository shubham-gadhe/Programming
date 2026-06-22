//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_First_Five_Multiples
//
//  Description  : This program accepts a number from the user
//                 and displays the first five multiples of
//                 the given number.
//
//  Example:
//      Input  : 4
//      Output : 4 8 12 16 20
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt <= iNo * 5; iCnt++)
    {
        if(iCnt % iNo == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}