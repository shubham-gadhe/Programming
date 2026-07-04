//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_String_Filter
//
//  Description  : This program accepts the frequency
//                 from the user and displays the
//                 message "Jay Ganesh..." that
//                 many times using a user-defined function.
//
//  Example:
//      Input  : -5
//      Output : Invalid input
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Added an input filter to validate the 
//                    frequency and display an error message 
//                    for invalid input.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept Frequency

        Call Display() by passing Frequency

        In Display()

            If Frequency is negative

                Display "Invalid input"

            Otherwise

                Initialize Counter as 1

                Repeat until Counter is less than or equal to Frequency

                    Display "Jay Ganesh..."

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
        printf("Jay Ganesh...\n");
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