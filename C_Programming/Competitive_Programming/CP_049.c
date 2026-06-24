//////////////////////////////////////////////////////////////////
//
//  File Name    : Fahrenheit_To_Celsius
//
//  Description  : This program accepts the temperature in
//                 Fahrenheit from the user and converts
//                 it into Celsius.
//
//  Example:
//      Input  : 32
//      Output : 0.000000
//
//      Input  : 98.6
//      Output : 37.000000
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
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celcius is %lf", dRet);

    return 0;
}