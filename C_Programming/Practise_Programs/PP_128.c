//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_128
//
//  Description       : This program accepts a string from the user
//                      and displays the string using a separate
//                      function.
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
//  Description       : It is used to display the given string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/08/2026
//
//////////////////////////////////////////////////////////////////

void ReverseDisplay(char *str)
{
    printf("%s\n", str);    
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
//      Ganesh
//
//////////////////////////////////////////////////////////////////