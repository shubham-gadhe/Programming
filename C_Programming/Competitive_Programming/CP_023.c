//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Numbers_From_Negative_To_Positive
//
//  Description  : This program accepts a number from the user
//                 and displays all numbers from the negative
//                 value of the number up to its positive value.
//
//  Example:
//      Input  : 4
//      Output : -4 -3 -2 -1 0 1 2 3 4
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}