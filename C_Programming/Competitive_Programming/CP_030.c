//////////////////////////////////////////////////////////////////
//
//  File Name    : Display_Reverse_Multiplication_Table
//
//  Description  : This program accepts a number from the user
//                 and displays its multiplication table in
//                 reverse order from 10 to 1. 
//  Example:
//      Input  : 5
//      Output : 50 45 40 35 30 25 20 15 10 5
//
//      Input  : -3
//      Output : 30 27 24 21 18 15 12 9 6 3
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;    

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 10; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t", iNo * iCnt ); 
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}