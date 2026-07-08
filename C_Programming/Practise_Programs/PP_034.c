/*
==============================================================================
 Program     : Display Numbers from 0 to N

 Description : Reads an integer from the user and displays all numbers from
               0 to the specified value.

 Author      : Shubham Gadhe
==============================================================================
*/

#include <stdio.h>

/*
==============================================================================
 Function    : Display

 Description : Displays all numbers from 0 to the specified value.

 Parameters  : iNo - Upper limit of the sequence.

 Returns     : None

 Complexity  : Time  : O(n)
               Space : O(1)
==============================================================================
*/
void Display(int iNo)
{
    int iCnt = 0;

    // Display numbers from 0 to the specified value.
    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }

    printf("\n");
}

int main(void)
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

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
 0    1    2    3    4    5
==============================================================================
*/