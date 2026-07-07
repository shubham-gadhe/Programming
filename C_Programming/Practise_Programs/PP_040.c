/*
==============================================================================
 Program     : Display Numbers from N to 1

 Description : Reads an integer from the user and displays all numbers from
               the specified value down to 1.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function    : Display

 Description : Displays all numbers from the specified value down to 1.

 Parameters  : iNo - Starting value of the sequence.

 Returns     : None

 Complexity  : Time  : O(n)
               Space : O(1)
==============================================================================
*/

void Display(int iNo)
{
    int iCnt = 0;

    // Display numbers from the specified value down to 1.
    for(iCnt = iNo; iCnt >= 1; iCnt--)
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
 5    4    3    2    1
==============================================================================
*/