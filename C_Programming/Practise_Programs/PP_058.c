/*
==============================================================================
 Program     : Demonstrate Global Array Initialization

 Description : Demonstrates assigning values to selected elements of a global
               array and accessing both initialized and default-initialized
               elements.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

// Global array
int Arr[7];     

int main()
{

    Arr[0] = 10;
    Arr[3] = 20;
    Arr[6] = 30;

    // Display the total size of the array in bytes.
    printf("%d\n", sizeof(Arr));

    // Display initialized array elements.
    printf("%d\n", Arr[0]);
    printf("%d\n", Arr[3]);
    printf("%d\n", Arr[6]);

    // Display default-initialized array elements.
    printf("%d\n", Arr[2]);
    printf("%d\n", Arr[5]);

    return 0;   
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
 28
 10
 20
 30
 0
 0

 Note:
 Global arrays are automatically initialized to zero by the compiler if no
 explicit initialization is provided.
==============================================================================
*/