//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_127
//
//  Description       : This program replaces every occurrence of
//                      the character 'l' with 'L' in a given string.
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
//  Function Name     : Update()
//
//  Description       : It is used to replace every occurrence of
//                      the character 'l' with 'L' in the given
//                      string.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/08/2026
//
//////////////////////////////////////////////////////////////////

void Update(char * str)
{
    while(*str != '\0')
    {
        if(*str == 'l') 
        {
            *str = 'L';
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

    printf("Updated String is : %s\n", Arr);
    
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
//      Updated String is : HeLLo
//
//////////////////////////////////////////////////////////////////