//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_062
//
//  Description       : This program accepts five integer elements
//                      from the user using a for loop and displays
//                      all the elements of the array using another
//                      for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/07/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h> 
 
int main() 
{ 
    int Arr[5] = {0}; 
 
    int iCnt = 0; 
 
    printf("Enter the elements : \n"); 
 
    for(iCnt = 0; iCnt < 5; iCnt++) 
    { 
        scanf("%d", &Arr[iCnt]); 
    } 
 
    printf("Elements of Array of : \n"); 
 
    for(iCnt = 0; iCnt < 5; iCnt++) 
    { 
        printf("%d\n", Arr[iCnt]); 
    } 
 
    return 0; 
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      10
//      20
//      30
//      40
//      50
//
//  Sample Output :
//      Elements of Array of :
//      10
//      20
//      30
//      40
//      50
//
//////////////////////////////////////////////////////////////////
