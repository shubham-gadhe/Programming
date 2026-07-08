/*
==============================================================================
 Program     : Display Alternate Negative Numbers from -N to -1

 Description : Reads an integer from the user and displays alternate negative
               numbers from the negative of the specified value up to -1.

 Author      : Shubham Gadhe
==============================================================================
*/     

#include<stdio.h>

/*
==============================================================================
 Function    : Display

 Description : Displays alternate negative numbers from -N to -1.

 Parameters  : iNo - Absolute value used to generate the sequence.

 Returns     : None

 Complexity  : Time  : O(n)
               Space : O(1)
==============================================================================
*/
void Display(int iNo)
{
    int iCnt = 0;

    // Display alternate negative numbers from -N to -1.
    for(iCnt = -iNo; iCnt < 0; iCnt = iCnt + 2)
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
 -5    -3    -1
==============================================================================
*/