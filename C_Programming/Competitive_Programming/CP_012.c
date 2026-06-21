////////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Factors_Of_Number
//
//  Description  : This program accepts a number from the user
//                 and displays all factors of the given number,
//                 excluding the number itself.
//
//  Example:
//      Input  : 12
//      Output : 1 2 3 4 6
//
//      Input  : 20
//      Output : 1 2 4 5 10
//
////////////////////////////////////////////////////////////////////


#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo ; i++)
    {
        if(iNo % i == 0)
        {
            printf("%d\t", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayFactor(iValue);

    return 0;
}