////////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Hello_Or_Demo
//
//  Description  : This program accepts a number from the user.
//                 If the number is less than 10, it displays
//                 "Hello"; otherwise, it displays "Demo".
//
//  Example:
//      Input  : 5
//      Output : Hello
//
//      Input  : 11
//      Output : Demo
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }    
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}