//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_113
//
//  Description       : This program accepts a string from the user
//                      and displays the first three characters using
//                      a character pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display()
//
//  Description       : It is used to display the first three
//                      characters of the given string using a
//                      character pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/08/2026
//
//////////////////////////////////////////////////////////////////

void Display(char *str)
{
    printf("%c\n", *str);
    str++;

    printf("%c\n", *str);
    str++;

    printf("%c\n", *str);
    str++;
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);  
    
    Display(Arr);
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Ganesh
//
//  Sample Output :
//
//      Enter string :
//      G
//      a
//      n
//
//////////////////////////////////////////////////////////////////