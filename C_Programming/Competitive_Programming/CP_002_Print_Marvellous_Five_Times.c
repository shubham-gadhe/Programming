////////////////////////////////////////////////////////////////////
//
//  File Name    : Print_Marvellous_Five_Times.c
//
//  Description  : This program displays the string "Marvellous"
//                 five times on the console using a for loop.
//
//  Example:
//      Output :
//          Marvellous
//          Marvellous
//          Marvellous
//          Marvellous
//          Marvellous
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
    
    for(i = 1; i <= 5; i++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();

    return 0;
}