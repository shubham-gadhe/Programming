/*
==============================================================================
 Program     : Display Odd Numbers from 1 to N

 Description : Reads an integer from the user and displays all odd numbers
               from 1 up to the specified value.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function    : Display

 Description : Displays all odd numbers from 1 up to the specified value.

 Parameters  : iNo - Upper limit of the sequence.

 Returns     : None

 Complexity  : Time  : O(n)
               Space : O(1)
==============================================================================
*/
void Display(int iNo)
{
    int iCnt = 0;

    // Display all odd numbers from 1 to the specified value.
    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
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
 1    3    5
==============================================================================
*/