/*
==============================================================================
 File Name   : PP_100.c

 Program     : Display a Character Array as a String

 Description : Initializes a character array with individual characters
               and displays the array as a string using the standard
               output function.

 Author      : Shubham Gadhe

 Time Complexity  : O(n)
 Space Complexity : O(1)
==============================================================================
*/

#include<stdio.h>

int main()
{
    char str[] = {'J','a','y',' ','G', 'a', 'n' , 'e' , 's' , 'h'};

    // Display the character array as a string.
    printf("%s\n", str);        

    return 0;
}

/*
==============================================================================
 Sample Output
------------------------------------------------------------------------------
Undefined Output

Note:
- The character array is not null-terminated ('\0').
- Since printf("%s", str) expects a null-terminated string, the behavior
  of this program is undefined.
==============================================================================
*/