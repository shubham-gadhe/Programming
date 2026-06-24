//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Digits
//
//  Description  : This program accepts a number from the user
//                 and displays all its digits one by one.
//
//  Example:
//      Input  : 1234
//      Output : 4 3 2 1
//
//      Input  : 567
//      Output : 7 6 5
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;

        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}