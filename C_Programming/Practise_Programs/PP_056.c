/*
==============================================================================
 Program     : Determine Size of an Array

 Description : Demonstrates how to determine the total size of an array in
               bytes using the sizeof operator.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

int main()
{
    int Arr[7] = {10,20,30,40,50};

    // Display the total size of the array in bytes.
    printf("%d\n", sizeof(Arr));

    return 0;   
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
 28

 Note:
 The output assumes that the size of an integer is 4 bytes.
 If the size of an integer differs on another system, the output will change
 accordingly.
==============================================================================
*/