//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_145
//
//  Description       : This program checks whether the 3rd bit of
//                      a given number is ON or OFF using a bit mask.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>   
 
int main() 
{ 
    int iNo = 0; 
    int iMask = 4; 
    int iAns = 0; 
 
    printf("Enter Number : \n"); 
    scanf("%d", &iNo); 
 
    iAns = iNo & iMask; 
 
    if(iAns == iMask) 
    { 
        printf("3rd bit is ON\n"); 
    } 
    else 
    { 
        printf("3rd bit is OFF\n"); 
    } 
 
    return 0; 
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      12
//
//  Sample Output :
//
//      Enter Number :
//      3rd bit is ON
//
//////////////////////////////////////////////////////////////////