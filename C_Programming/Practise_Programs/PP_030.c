//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Numbers
//
//  Description  : This program accepts a number
//                 from the user and displays
//                 numbers from 1 up to the
//                 given number using a user-defined function.
//
//  Example:
//      Input  : 5
//      Output : 12345
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Based Version: Added input validation to handle negative 
//                 values before displaying the numbers.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept Number

        Call Display() by passing Number

        In Display()

            If Number is negative

                Display "Invalid input"

            Otherwise

                Initialize Counter as 1

                Repeat until Counter is less than or equal to Number

                    Display Counter

                    Increment Counter by 1

    STOP
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt= 0;

    // Filter
    if(iNo < 0)
    {
        printf("Invalid input");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d", iCnt);
    }  
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    Display(iValue);
      
    return 0;
}