//////////////////////////////////////////////////////////////////
//
//  File Name    : Summation_Of_Non_Factors
//
//  Description  : This program accepts a number from the user
//                 and returns the summation of all its
//                 non-factors, excluding the number itself.
//
//  Example:
//      Input  : 12
//      Output : 50
//
//      Input  : 10
//      Output : 37
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
    int i = 0;

    int iAddNonFact = 0;

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            iAddNonFact = iAddNonFact + i;
        }
    }    
    return iAddNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d", iRet);

    return 0;
}