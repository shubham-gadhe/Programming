/*
==============================================================================
 File Name   : PP_099.c

 Program     : Display a String

 Description : Initializes a character array with a string and displays
               the string using the standard output function.

 Author      : Shubham Gadhe

 Time Complexity  : O(n)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>

int main()
{
    char str[] = "Jay Ganesh...";

    // Display the string.
    printf("%s\n", str);        

    return 0;
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
Jay Ganesh...
==============================================================================
*/