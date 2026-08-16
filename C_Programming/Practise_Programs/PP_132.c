//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_132
//
//  Description       : This program demonstrates reverse traversal
//                      of a string using a character pointer and
//                      displays the string from different positions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/08/2026
//
//  Time Complexity   : O(n^2)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : ReverseDisplay()
//
//  Description       : It is used to traverse the string in reverse
//                      order using a character pointer and display
//                      the string from different positions.
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

    str--;
    
    while(start <= str)
    {
        printf("%s\n", str);
        str--;
    }

    printf("\n");
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
//      h
//      h
//      h
//      h
//      h
//      h
//
//////////////////////////////////////////////////////////////////