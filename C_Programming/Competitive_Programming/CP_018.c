//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Non_Factors
//
//  Description  : This program accepts a number from the user
//                 and displays all the non-factors of the given
//                 number, excluding the number itself.
//
//  Example:
//      Input  : 12
//      Output : 5 7 8 9 10 11
//
//      Input  : 13
//      Output : 2 3 4 5 6 7 8 9 10 11 12
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int i = 0;

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}