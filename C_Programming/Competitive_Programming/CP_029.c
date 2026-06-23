//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Multiplication_Table
//
//  Description  : This program accepts a number from the user
//                 and displays its multiplication table from
//                 1 to 10.
//  Example:
//      Input  : 5
//      Output : 5 10 15 20 25 30 35 40 45 50
//
//      Input  : -3
//      Output : 3 6 9 12 15 18 21 24 27 30
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;    

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= 10 ; iCnt++)
    {
        printf("%d\t", iNo * iCnt ); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;

}

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;    

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= 10 ; iCnt++)
    {
        printf("%d\t", iNo * iCnt ); 
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;

}