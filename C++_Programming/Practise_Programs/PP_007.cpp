//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_007
//
//  Description       : This program stores five integer values in
//                      an array and displays all array elements
//                      using a for loop.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/09/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

int main()
{
    int Brr[] = {10,20,30,40,50};

    int iCnt = 0;

    for(iCnt = 0; iCnt < 5; iCnt++)
    cout<<Brr[iCnt]<<"\n";

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      10
//      20
//      30
//      40
//      50
//
//////////////////////////////////////////////////////////////////