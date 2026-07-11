/*
==============================================================================
 Program     : Display Array Addresses

 Description : Demonstrates the relationship between an array name, the
               address of the array, and the address of its first element.

 Author      : Shubham Gadhe
==============================================================================
*/

#include<stdio.h>

int main()
{
    int Arr[] = {10,20,30,40,50};

    // Display the address represented by the array name.
    printf("%d\n", Arr);
    
    // Display the address of the entire array.
    printf("%d\n", &Arr);

    // Display the address of the first array element.
    printf("%d\n", &Arr[0]);

    return 0;   
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
 Address of Arr
 Address of &Arr
 Address of &Arr[0]

 Note:
 The actual addresses depend on memory allocation and will vary each time
 the program is executed.
==============================================================================
*/