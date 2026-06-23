//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Hash_And_Star_Pattern
//
//  Description  : This program accepts a number from the user
//                 and displays '#' followed by '*'
//                 for the given number of times.
//
//  Example:
//      Input  : 5
//      Output : *  *   *   *   *   #   #   #   #   #
//
//      Input  : 2
//      Output : #  #   *   *
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
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
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