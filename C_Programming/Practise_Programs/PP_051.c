/*
==============================================================================
 Program     : Extract Digits from an Integer

 Description : Extracts and displays each digit of an integer starting from
               the least significant digit using the modulus (%) and division
               (/) operators.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

int main()
{
    int iNo = 751;
    int iDigit = 0;

    // Extract and display the last digit.
    iDigit = iNo % 10;
    printf("%d\n", iDigit);
    iNo = iNo / 10;

    // Extract and display the next digit.
    iDigit = iNo % 10;
    printf("%d\n", iDigit);
    iNo = iNo / 10;

    // Extract and display the remaining digit.
    iDigit = iNo % 10;
    printf("%d\n", iDigit);
    iNo = iNo / 10;    
    
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