//////////////////////////////////////////////////////////////////
//
//  File Name    : Circle_Area
//
//  Description  : This program accepts the radius of a circle
//                 from the user and calculates its area.
//
//  Example:
//      Input  : 5
//      Output : 78.500000
//
//      Input  : 7
//      Output : 153.860000
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius : \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of the Circle is : %lf", dRet);

    return 0;
}