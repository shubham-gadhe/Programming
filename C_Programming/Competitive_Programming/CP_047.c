//////////////////////////////////////////////////////////////////
//
//  File Name    : Rectangle_Area
//
//  Description  : This program accepts the width and height
//                 of a rectangle from the user and calculates
//                 its area.
//
//  Example:
//      Input  : Width = 5, Height = 10
//      Output : 50.000000
//
//      Input  : Width = 7, Height = 4
//      Output : 28.000000
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter Width : \n");
    scanf("%f", &fValue1);

    printf("Enter Height : \n");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of the Rectangle is : %lf", dRet);

    return 0;
}