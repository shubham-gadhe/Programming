/*
==============================================================================
 Program     : Display Negative Numbers from -N to 0

 Description : Reads an integer from the user and displays all numbers from
               the negative of the specified value up to 0.

 Author      : Shubham Gadhe
==============================================================================
*/  

#include<stdio.h>

/*
==============================================================================
 Function    : Display

 Description : Displays all numbers from -N to 0.

 Parameters  : iNo - Absolute value used to generate the sequence.

 Returns     : None

 Complexity  : Time  : O(n)
               Space : O(1)
==============================================================================
*/
void Display(int iNo)
{
    int iCnt = 0;

    // Display numbers from -N to 0.
    for(iCnt = -iNo; iCnt <= 0; iCnt++)
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
 -5    -4    -3    -2    -1    0
==============================================================================
*/