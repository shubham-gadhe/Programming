/*
==============================================================================
 Program     : Display a String Five Times Using do-while Loop

 Description : Displays a string five times using a do-while loop.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

int main()
{
    int iCnt = 0;

    iCnt = 1;

    // Display the string five times.
    do
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }while(iCnt <= 5);
    
    return 0;
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
 Jay Ganesh...
 Jay Ganesh...
 Jay Ganesh...
 Jay Ganesh...
 Jay Ganesh...
==============================================================================
*/