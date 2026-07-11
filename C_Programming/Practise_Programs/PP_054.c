/*
==============================================================================
 Program     : Display Digits of a Number

 Description : Reads an integer from the user and displays each digit of the
               specified number starting from the least significant digit.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

/*
==============================================================================
 Function    : DisplayDigits

 Description : Displays each digit of the specified number from right to left.

 Parameters  : iNo - Number whose digits are to be displayed.

 Returns     : None

 Complexity  : Time  : O(d)
               Space : O(1)

 Note        : d represents the number of digits in the given number.
==============================================================================
*/
void DisplayDigits(int iNo)
{
    int iDigit = 0;

    // Display each digit from right to left.
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }  
}

int main()
{
    int iValue = 0; 
    
    printf("Enter Number : \n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);
    
    return 0;
}

/*
==============================================================================
 Sample Input
------------------------------------------------------------------------------
 751

 Sample Output
------------------------------------------------------------------------------
 1
 5
 7
==============================================================================
*/