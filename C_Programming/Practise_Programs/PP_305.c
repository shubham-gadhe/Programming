//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_305
//
//  Description       : Calculates the length of a string using
//                      recursion and a static variable without
//                      using the built-in strlen() function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//  Note              : n represents the length of the string.
//                      Recursive calls require O(n) stack space.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : strlenX
//
//  Description       : Calculates the length of the given string
//                      recursively by traversing each character
//                      until the null character ('\0') is found.
//                      Uses a static variable to maintain the
//                      character count across recursive calls.
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
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int strlenX(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        strlenX(str);
    }

    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts a string from the user, calls
//                      strlenX() to calculate its length
//                      recursively, and displays the result.
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