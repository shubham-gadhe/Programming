//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_061
//
//  Description       : This program accepts five integer elements
//                      from the user and displays all the elements
//                      of the array.
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
 
    scanf("%d", &Arr[0]); 
    scanf("%d", &Arr[1]); 
    scanf("%d", &Arr[2]); 
    scanf("%d", &Arr[3]); 
    scanf("%d", &Arr[4]); 
 
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
