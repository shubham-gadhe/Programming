//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_009
//
//  Description       : This program dynamically allocates memory
//                      for an integer array, accepts elements from
//                      the user, calculates their summation using
//                      a separate function, and releases memory.
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

int Summation(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0;

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

    iRet = Summation(Brr,iLength);

    cout<<"Summation is : "<<iRet<<endl;
    
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
//      Summation is : 150
//
//////////////////////////////////////////////////////////////////