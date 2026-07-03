//////////////////////////////////////////////////////////////////
//
//  File Name    : Calculate_Ticket_Price
//
//  Description  : This program accepts age
//                 from the user and calculates
//                 the ticket price.
//
//  Example:
//      Input  : 25
//      Output : Your ticket price will be 900 rupees
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Added input filter to validate negative
//                    age and terminate processing for
//                    invalid input.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept age as Age

        If Age is negative
            Display "Invalid Input"
            Stop execution of function

        Call CalculateTicketPrice() by passing Age

        Receive the result

        Display the ticket price

    STOP
*/

#include<stdio.h>

int CalculateTicketPrice(int iAge)
{
    // Input Filter
    if(iAge < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }

    if(iAge >= 0 && iAge <=5)
    {
        return 0;
    }
    else if (iAge >= 6 && iAge <=18)
    {
        return 500;
    }
    else if (iAge >= 19 && iAge <=50)
    {
        return 900;
    }
    else
    {
        return 400;
    } 
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Please enter your age to calculate ticket prices : ");
    scanf("%d", &iValue);

    iRet = CalculateTicketPrice(iValue);

    printf("Your ticket price will be %d rupees \n", iRet);
    return 0;
}