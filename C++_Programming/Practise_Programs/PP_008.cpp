//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_008
//
//  Description       : This program dynamically allocates memory
//                      for an integer array, accepts elements from
//                      the user, displays the elements, and then
//                      releases the allocated memory.
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
    int *Brr = NULL; 
    int iLength = 0, iCnt = 0; 
 
    cout<<"Enter the number of elements : \n"; 
    cin>>iLength; 
 
    Brr = new int[iLength]; // Memory Allocation 
 
    cout<<"Enter the elements: \n"; 
    for(iCnt = 0; iCnt < iLength; iCnt++) 
    { 
        cin>>Brr[iCnt]; 
    } 
 
    cout<<"Elements of the array are : \n"; 
    for(iCnt = 0; iCnt < iLength; iCnt++) 
    { 
        cout<<Brr[iCnt]<<endl; 
    } 
 
    delete []Brr; 
     
    return 0; 
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      Enter the number of elements :
//      5
//
//      Enter the elements:
//      10 20 30 40 50
//
//  Sample Output :
//      Elements of the array are :
//      10
//      20
//      30
//      40
//      50
//
//////////////////////////////////////////////////////////////////