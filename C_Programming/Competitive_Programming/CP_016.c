//////////////////////////////////////////////////////////////////
//
//  File Name    : Multiplication_Of_Factors
//
//  Description  : This program accepts a number from the user
//                 and returns the multiplication of all its
//                 factors excluding the number itself.
//
//  Example:
//      Input  : 12
//      Output : 144
//
//      Input  : 13
//      Output : 1
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
    int i = 0;
    int iMult = 1;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d", iRet);

    return 0;
}