//////////////////////////////////////////////////////////////////
//
//  File Name    : Fahrenheit_To_Celsius
//
//  Description  : This program accepts the temperature in
//                 Fahrenheit from the user and converts
//                 it into Celsius.
//
//  Example:
//      Input  : 10
//      Output : -12.2222
//
//      Input  : 34
//      Output : 1.11111
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCal = 0.0;
    
    dCal = ((fTemp - 32) * (5.0/9.0));

    return dCal;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("temperature in celsius is %lf", dRet);

    return 0;
}