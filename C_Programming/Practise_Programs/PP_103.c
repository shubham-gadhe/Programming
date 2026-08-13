//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_103
//
//  Description       : This program demonstrates the use of the
//                      strlen() function to find the length of a string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

int main()
{
    char str[] = "Jay Ganesh";
    int iRet = 0;

    iRet = strlen(str);

    printf("Length of string is : %d\n", iRet);        

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      Length of string is : 10
//
//////////////////////////////////////////////////////////////////