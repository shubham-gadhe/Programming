//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_133
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
//  Function Name     : strrevX()
//
//  Description       : It is used to traverse the string in reverse
//                      order using a character pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/08/2026
//
//////////////////////////////////////////////////////////////////

void strrevX(char *str)
{
    char *start  = NULL;
    char *end = NULL;
    
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

    strrevX(Arr);

   