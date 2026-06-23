//////////////////////////////////////////////////////////////////
//
//  File Name    : Circle_Area
//
//  Description  : This program accepts the radius of a circle
//                 from the user and calculates its area.
//
//  Example:
//      Input  : 5.3
//      Output : 88.2026
//
//      Input  : 10.4
//      Output : 339.6224
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

#define PI  3.14

double CircleArea(float fRadius)
{
    double dArea = 0.0;    

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of a circle is %f", dRet);

    return 0;
}