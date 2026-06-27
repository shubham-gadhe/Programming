//////////////////////////////////////////////////////////////////
//
//  File Name    : Addition_Of_Two_Numbers.c
//
//  Description  : This program accepts two integer values
//                 from the user and performs their addition.
//
//  Example:
//      Input  : 10 11
//      Output : 21
//
//////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////
//
//  Base Version: Performs addition of two integer numbers
//                using direct logic inside main.
//
//////////////////////////////////////////////////////////////////

/*
    Algorithm

    START

        Accept the first integer number
        Accept the second integer number

        Calculate the addition of both numbers

        Display the result

    STOP
*/

#include<stdio.h>

int main()
{
    int i, j, k;                               

    printf("Enter first number : \n");
    scanf("%d", &i);

    printf("Enter second number : \n");
    scanf("%d", &j);

    k = i + j;                                 

    printf("Addition is : %d\n", k);

    return 0;
}