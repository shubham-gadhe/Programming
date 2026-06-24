//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Range
//
//  Description  : This program accepts a starting point and
//                 an ending point from the user and displays
//                 all numbers within that range.
//
//  Example:
//      Input  : Start = 5, End = 10
//      Output : 5 6 7 8 9 10
//
//      Input  : Start = 1, End = 5
//      Output : 1 2 3 4 5
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    
    if(iStart > iEnd)
    {
        printf("Invalid range");        
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting point : \n");
    scanf("%d", &iValue1);

    printf("Enter ending point : \n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}