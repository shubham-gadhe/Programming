//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_129
//
//  Description       : This program demonstrates reverse traversal
//                      of a string using character pointers.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : ReverseDisplay()
//
//  Description       : It is used to traverse and display the given
//                      string in reverse order using character
//                      pointers.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/08/2026
//
//////////////////////////////////////////////////////////////////

void ReverseDisplay(char *str)
{
    char *start  = NULL;
    
    start = str;

    while(*str != '\0')
    {
        str++;
    }

        // ISSUE
    while(start <= str)
    {
        printf("%c\n",*str);
        str--;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n]s", Arr);

    ReverseDisplay(Arr);

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
//      [Undefined / Garbage Output]
//
//////////////////////////////////////////////////////////////////