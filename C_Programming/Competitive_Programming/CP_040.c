//////////////////////////////////////////////////////////////////
//
//  File Name    : Square_Feet_To_Square_Meter
//
//  Description  : This program accepts the area in square feet
//                 from the user and converts it into
//                 square meters.
//
//  Example:
//      Input  : 5
//      Output : 0.464515
//
//      Input  : 7
//      Output : 0.650321
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(double dValue)
{
    double dSmeter = 0.0929;
    double dArea = 0.0;

    dArea = dValue * dSmeter;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf", dRet);

    return 0;
}