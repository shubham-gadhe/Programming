//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_107
//
//  Description       : This program demonstrates two different
//                      methods to calculate the length of a string,
//                      using strlen() and a character pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>

int main()
{
    char *str = "Ganesh";    
    int iCount = 0; 
    
    printf("Length of string is : %lu\n", strlen(str));

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
//      Length of string is : 6
//
//////////////////////////////////////////////////////////////////