/*
==============================================================================
 Program     : Display Array Elements Using a Loop

 Description : Demonstrates how to traverse an integer array and display all
               of its elements using a for loop.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    int iCnt = 0;

    // Traverse the array and display each element.
    for(iCnt = 0; iCnt < 5 ; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }   

    return 0;   
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
 10
 20
 30
 40
 50
==============================================================================
*/