/*
==============================================================================
 Program     : Display Numbers from -N to N

 Description : Reads an integer from the user and displays all numbers from
               the negative of the specified value up to the specified value.

 Author      : Shubham Gadhe
==============================================================================
*/   

#include<stdio.h>

/*
==============================================================================
 Function    : Display

 Description : Displays all numbers from -N to N.

 Parameters  : iNo - Absolute value used to generate the sequence.

 Returns     : None

 Complexity  : Time  : O(n)
               Space : O(1)
==============================================================================
*/
void Display(int iNo)
{
    int iCnt = 0;

    // Display numbers from -N to N.
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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
 -5    -4    -3    -2    -1    0    1    2    3    4    5
==============================================================================
*/