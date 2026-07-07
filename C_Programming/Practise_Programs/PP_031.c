/*
==============================================================================
 Program     : Display Numbers from 0 to N

 Description : Reads an integer from the user and displays all numbers from
               0 to the specified value. If the entered value is negative,
               an appropriate error message is displayed.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function    : Display

 Description : Displays numbers from 0 to the specified value. If the value
               is negative, it displays an error message.

 Parameters  : iNo - Upper limit of the sequence.

 Returns     : None

 Complexity  : Time  : O(n)
               Space : O(1)
==============================================================================
*/
void Display(int iNo)
{
    int iCnt= 0;

    // Filter
    if(iNo < 0)
    {
        printf("Invalid input");
    }

    for(iCnt = 0; iCnt <= iNo; iCnt++)
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
 012345

==============================================================================
 Sample Input
------------------------------------------------------------------------------
 -3

 Sample Output
------------------------------------------------------------------------------
 Invalid input
==============================================================================
*/