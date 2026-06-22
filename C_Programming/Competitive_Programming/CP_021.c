//////////////////////////////////////////////////////////////////
//
//  File Name    : Pattern Printing
//
//  Description  : This program accepts a number from the user
//                 and prints '$' and '*' alternately for the
//                 given number of times.
//
//  Example:
//      Input  : 5
//      Output : $   *   $   *   $   *   $   *   $   *
//
//      Input  : 3
//      Output : $   *   $   *   $   *
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Pattern(iValue);
    
    return 0;
}