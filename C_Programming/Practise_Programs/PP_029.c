//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_String_With_Serial_Number
//
//  Description  : This program accepts the frequency
//                 from the user and displays the
//                 message "Jay Ganesh..." along with
//                 its serial number using a user-defined function.
//
//  Example:
//      Input  : 3
//      Output : 1 : Jay Ganesh...
//               2 : Jay Ganesh...
//               3 : Jay Ganesh...
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Added serial numbers with each
//                    message and included input
//                    validation for negative values.
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

                    Display Counter and "Jay Ganesh..."

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
        printf("%d :Jay Ganesh...\n", iCnt);
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