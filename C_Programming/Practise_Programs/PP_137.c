//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_137
//
//  Description       : This program demonstrates string reversal
//                      using two character pointers and swapping
//                      characters in the string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : strrevX()
//
//  Description       : It is used to reverse the given string by
//                      swapping characters using two character
//                      pointers.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/08/2026
//
//////////////////////////////////////////////////////////////////

void strrevX(char *str)
{
    char *start  = NULL;
    char *end = NULL;
    char temp = '\0';
    
    start = str;

    while(*str != '\0')
    {
        str++;
    }

    str--;

    end = str;
    
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n]s", Arr);

    strrevX(Arr);

    printf("Updated string : %s\n", Arr);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Ganesh
//
//  Sample Output :
//
//      Enter String :
//      Updated string : hsenaG
//
//////////////////////////////////////////////////////////////////