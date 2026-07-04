//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_String_Frequency
//
//  Description  : This program accepts the frequency
//                 from the user and displays the
//                 message "Jay Ganesh..." that
//                 many times using a for loop.
//
//  Example:
//      Input  : 5
//      Output : Jay Ganesh...
//               Jay Ganesh...
//               Jay Ganesh...
//               Jay Ganesh...
//               Jay Ganesh...
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Accepts the frequency from the
//                    user and uses iteration to
//                    display the message repeatedly.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept Frequency

        Initialize Counter as 1

        Repeat until Counter is less than or equal to Frequency

            Display "Jay Ganesh..."

            Increment Counter by 1

    STOP
*/

#include<stdio.h>

int main()
{
    int iCnt= 0;
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }    
    
    return 0;
}