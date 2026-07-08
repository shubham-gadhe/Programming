/*
==============================================================================
 Program     : Display Numbers from 0 to N-1

 Description : Reads an integer from the user and displays all numbers from
               0 up to (but not including) the specified value.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function    : Display

 Description : Displays all numbers from 0 up to (but not including) the
               specified value.

 Parameters  : iNo - Number of values to display.

 Returns     : None

 Complexity  : Time  : O(n)
               Space : O(1)
==============================================================================
*/
void Display(int iNo)
{
    int iCnt = 0;

    // Display numbers from 0 to (iNo - 1).
    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%d\t", iCnt);
    }
    
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
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
 0    1    2    3    4
==============================================================================
*/