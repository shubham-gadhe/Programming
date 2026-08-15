//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_002
//
//  Description       : This program accepts two numbers from the
//                      user and displays their addition.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 15/08/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<iostream> 
using namespace std; 
 
int main() 
{ 
    int iNo1 = 0, iNo2 = 0, iSum = 0; 
 
    cout<<"Enter the First Number : "; 
    cin >>iNo1; 
 
    cout<<"Enter the Second Number : "; 
    cin >>iNo2; 
 
    iSum = iNo1 + iNo2; 
 
    cout<<"Addition of Numbers is : "<<iSum<<endl; 
 
    return 0; 
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      10
//      20
//
//  Sample Output :
//
//      Enter the First Number : 10
//      Enter the Second Number : 20
//      Addition of Numbers is : 30
//
//////////////////////////////////////////////////////////////////