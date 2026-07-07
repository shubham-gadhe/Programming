/*
==============================================================================
 Program     : Display Numbers from N to 0

 Description : Reads an integer from the user and displays all numbers from
               the specified value down to 0. If the entered value is
               negative, an appropriate error message is displayed.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function    : Display

 Description : Displays all numbers from the specified value down to 0.
               If the value is negative, it displays an error message.

 Parameters  : iNo - Starting value of the sequence.

 Returns     : None

 Complexity  : Time  : O(n)
               Space : O(1)
==============================================================================
*/
void Display(int iNo)
{
    int iCnt= 0;

    // Filter (Validate the input before processing)
    if(iNo < 0)
    {
        printf("Invalid input");
    }

    // Display numbers from the specified value down to 0.
    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d", iCnt);
    }  
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d\n", &iValue);

    Display(iValue);
      
    return 0;
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
 5

 Sample Output
------------------------------------------------------------------------------
 543210

==============================================================================
 Sample Input
------------------------------------------------------------------------------
 -4

 Sample Output
------------------------------------------------------------------------------
 Invalid input
==============================================================================
*/