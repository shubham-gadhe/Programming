//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_104
//
//  Description       : This program demonstrates the difference
//                      between strlen() and sizeof() for a string.
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
    
    iRet = sizeof(str);

    printf("Size of string is : %d\n", iRet);

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
//      Size of string is : 11
//
//////////////////////////////////////////////////////////////////