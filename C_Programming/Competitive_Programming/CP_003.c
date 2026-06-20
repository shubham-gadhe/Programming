////////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Numbers_5_To_1
//
//  Description  : This program displays the numbers from 5 to 1
//                 on the console using a while loop.
//
//  Example:
//      Output :
//          5
//          4
//          3
//          2
//          1
//
////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display()
{
    int i = 0;

    i = 5;

    while(i > 0 )
    {
        printf("%d\n", i);
        i--;
    }    
}

int main()
{
    Display();

    return 0;
}