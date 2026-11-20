//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_306
//
//  Description       : Counts the total number of capital letters
//                      present in a given string using a
//                      user-defined function.
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
//  Function Name     : CountCapital
//
//  Description       : Traverses the given string and checks
//                      whether each character belongs to the
//                      uppercase alphabet range ('A' to 'Z').
//                      Counts and returns the total number of
//                      capital letters.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/11/2026
//
//  Input             : Pointer to a character string.
//
//  Output            : Returns the number of capital letters.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Accepts a string from the user, calls
//                      CountCapital() to count the uppercase
//                      letters, and displays the result.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/11/2026
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