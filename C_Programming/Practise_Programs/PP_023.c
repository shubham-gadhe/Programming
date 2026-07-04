//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_String_Using_Iteration
//
//  Description  : This program displays the message
//                 "Jay Ganesh..." four times on the
//                 screen using a for loop.
//
//  Example:
//      Output : Jay Ganesh...
//               Jay Ganesh...
//               Jay Ganesh...
//               Jay Ganesh...
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Enhanced Version: Displays the message using
//                    iteration (for loop) to avoid
//                    repetitive statements.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Initialize Counter as 1

        Repeat until Counter is less than or equal to 4

            Display "Jay Ganesh..."

            Increment Counter by 1

    STOP
*/

#include<stdio.h>

int main()
{
    int iCnt= 0;

    // Iteration
    for(iCnt = 1; iCnt <=4; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }    
    return 0;
}