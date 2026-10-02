//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_069
//
//  Description       : This program demonstrates passing an array
//                      to a function and accessing consecutive
//                      elements using pointer arithmetic.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h> 
 
//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display()
//
//  Description       : It displays consecutive elements of the
//                      array by incrementing the array pointer
//                      after accessing each element.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 01/08/2026
//
//////////////////////////////////////////////////////////////////

void Display(int Arr[]) 
{ 
    printf("%d\n", *Arr); 
 
    Arr++; 
 
    printf("%d\n", *Arr); 
 
    Arr++; 
 
    printf("%d\n", *Arr); 
} 
 
int main() 
{ 
    int Brr[5] = {10,20,30,40,50}; 
 
    Display(Brr); 
 
    return 0; 
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input
//
//  Sample Output :
//      10
//      20
//      30
//
//////////////////////////////////////////////////////////////////
