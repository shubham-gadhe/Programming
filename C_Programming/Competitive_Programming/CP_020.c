//////////////////////////////////////////////////////////////////
//
//  File Name    : Difference_Between_Factors_And_NonFactors
//
//  Description  : This program accepts a number from the user
//                 and returns the difference between the
//                 summation of its factors and the summation
//                 of its non-factors.
//
//  Example:
//      Input  : 12
//      Output : -34
//
//      Input  : 10
//      Output : -29
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iAddFact = 0;
    int iAddNonFact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iAddFact = iAddFact + iCnt;
        }
        else
        {
            iAddNonFact = iAddNonFact + iCnt;
        }
    }
    
    return (iAddFact - iAddNonFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}