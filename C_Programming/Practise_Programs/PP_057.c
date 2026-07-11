/*
==============================================================================
 Program     : Demonstrate Partial Array Initialization

 Description : Demonstrates assigning values to selected array elements and
               accessing both initialized and uninitialized elements.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

int main()
{
    int Arr[7];

    Arr[0] = 10;
    Arr[3] = 20;
    Arr[6] = 30;

    // Display the total size of the array in bytes.
    printf("%d\n", sizeof(Arr));

    // Display initialized array elements.
    printf("%d\n", Arr[0]);
    printf("%d\n", Arr[3]);
    printf("%d\n", Arr[6]);

    // Display uninitialized array elements.
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
 Garbage Value
 Garbage Value

 Note:
 Uninitialized local array elements contain indeterminate (garbage) values.
 Their actual values vary each time the program is executed.
==============================================================================
*/