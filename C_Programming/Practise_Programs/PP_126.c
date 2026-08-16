//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_126
//
//  Description       : This program replaces every occurrence of
//                      the character 'l' with '-' in a given string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/08/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Update(char * str)
{
    while(*str != '\0')
    {
        if(*str == 'l') 
        {
          *str = '-';
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);  
    
    Update(Arr);

    printf("Updated String is is : %s\n", Arr);
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Hello
//
//  Sample Output :
//
//      Enter string :
//      Updated String is is : He--o
//
//////////////////////////////////////////////////////////////////