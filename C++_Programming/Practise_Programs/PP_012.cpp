//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_012
//
//  Description       : This program demonstrates the memory size
//                      of a C++ class object containing an integer
//                      pointer and an integer data member.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
};

int main()
{
    ArrayX aobj;

    cout<<sizeof(aobj)<<endl;   //16 
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      16
//
//////////////////////////////////////////////////////////////////