//////////////////////////////////////////////////////////////////
//
//  File Name    : Square_Feet_To_Square_Meter
//
//  Description  : This program accepts the area in square feet
//                 from the user and converts it into
//                 square meters.
//
//  Example:
//      Input  : 100
//      Output : 9.290000
//
//      Input  : 250
//      Output : 23.225000
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSf = 0.0929;
    double dArea = 0.0;

    dArea = iValue * dSf;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is: %lf", dRet);

    return 0;
}