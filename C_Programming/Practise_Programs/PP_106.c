//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_106
//
//  Description       : This program calculates the length of a
//                      string using a character pointer and while loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char *str = "Ganesh";    
    int iCount = 0;  

    while(*str != '\0')
    {
        iCount++;
        str++;
    }    

    printf("Length of string is : %d\n", iCount);
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//
//      Length of string is : 6
//
//////////////////////////////////////////////////////////////////