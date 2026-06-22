//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Numbers_Till_Input
//
//  Description  : This program accepts a number from the user
//                 and displays all numbers from 1 up to the
//                 given number.
//
//  Example:
//      Input  : 8
//      Output : 1 2 3 4 5 6 7 8
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}