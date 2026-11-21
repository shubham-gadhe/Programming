//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_307
//
//  Description       : Counts the total number of capital letters
//                      present in a given string using recursion
//                      and a static variable.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/11/2026
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
//  Function Name     : CountCapital
//
//  Description       : Traverses the given string recursively
//                      and checks whether each character belongs
//                      to the uppercase alphabet range ('A' to 'Z').
//                      Uses a static variable to maintain the
//                      count across recursive calls.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/11/2026
//
//  Input             : Pointer to a character string.
//
//  Output            : Returns the total number of capital letters.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        str++;
        CountCapital(str);
    }

    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts a string from the user, calls
//                      CountCapital() to count uppercase letters
//                      recursively, and displays the result.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/11/2026
//
//  Input             : A string entered by the user.
//
//  Output            : Displays the total number of capital letters.
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

    iRet = CountCapital(Arr);

    printf("Number of Capital letters are : %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  Enter string :
//  HelloWORLD
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  Number of Capital letters are : 0
//
//////////////////////////////////////////////////////////////////