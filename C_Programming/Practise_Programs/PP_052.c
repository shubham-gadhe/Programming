/*
==============================================================================
 Program     : Display Digits of a Number Using while Loop

 Description : Extracts and displays each digit of a number starting from
               the least significant digit using a while loop.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

int main()
{
    int iNo = 751;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }    
    
    return 0;
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
 1
 5
 7
==============================================================================
*/