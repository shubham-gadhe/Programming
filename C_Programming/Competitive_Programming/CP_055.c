//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Range_In_Reverse
//
//  Description  : This program accepts a starting point and
//                 an ending point from the user and displays
//                 all numbers in reverse order within that range.
//
//  Example:
//      Input  : Start = 1, End = 5
//      Output : 5 4 3 2 1
//
//      Input  : Start = 10, End = 15
//      Output : 15 14 13 12 11 10
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;
   
    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
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

    printf("Enter Staring Point : \n");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : \n");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}