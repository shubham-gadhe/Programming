//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_304
//
//  Description       : Calculates the length of a string using
//                      a user-defined function without using
//                      the built-in strlen() function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//  Note              : n represents the length of the string.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : strlenX
//
//  Description       : Calculates the length of the given string
//                      by traversing each character until the
//                      null character ('\0') is encountered.
//                      Returns the total character count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/11/2026
//
//  Input             : Pointer to a character string.
//
//  Output            : Returns the length of the string.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int strlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts a string from the user, calls
//                      strlenX() to calculate its length, and
//                      displays the calculated string length.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/11/2026
//
//  Input             : A string entered by the user.
//
//  Output            : Displays the length of the entered string.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("*%*[^'\n']s", Arr);

    iRet = strlenX(Arr);

    printf("String length is : %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  Enter string :
//  Hello
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  String length is : 0
//
//////////////////////////////////////////////////////////////////