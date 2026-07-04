//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_String_11_Times
//
//  Description  : This program displays the message
//                 "Jay Ganesh..." eleven times on the
//                 screen using a for loop.
//
//  Example:
//      Output : Jay Ganesh...
//               Jay Ganesh...
//               Jay Ganesh...
//               ...
//               (Total 11 times)
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

        Repeat until Counter is less than or equal to 11

            Display "Jay Ganesh..."

            Increment Counter by 1

    STOP
*/

#include<stdio.h>

int main()
{
    int iCnt= 0;

    for(iCnt = 1; iCnt <=11; iCnt++)
    {
        printf("Jay Ganesh...\n");
    } 
       
    return 0;
}