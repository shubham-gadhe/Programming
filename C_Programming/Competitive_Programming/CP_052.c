//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Even_Numbers_In_Range
//
//  Description  : This program accepts a starting point and
//                 an ending point from the user and displays
//                 all even numbers within that range.
//
//  Example:
//      Input  : Start = 1, End = 10
//      Output : 2 4 6 8 10
//
//      Input  : Start = 5, End = 15
//      Output : 6 8 10 12 14
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            printf("%d\t", iCnt);
        }        
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}