///////////////////////////////////////////////////////////////////
//
//  File Name    : Display_N_Stars_Using_While
//
//  Description  : This program accepts a number from the user
//                 and displays that many asterisk (*) characters
//                 on the screen using a while loop.
//
//  Example:
//      Input  : 5
//      Output : *****
//
//      Input  : 12
//      Output : ************
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    while (iCnt < iNo)
    {
        printf("*");

        iCnt++;
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