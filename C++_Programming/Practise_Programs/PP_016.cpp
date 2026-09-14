//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_016
//
//  Description       : This program demonstrates both a default
//                      constructor and a parameterized constructor
//                      in a C++ class.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX()
        {

        }

        ArrayX (int X)
        {

        }
};

int main()
{
    ArrayX aobj1;           
    ArrayX aobj2(5);        

    cout<<sizeof(aobj1)<<endl;   
    cout<<sizeof(aobj2)<<endl;   
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      12
//      12
//
//////////////////////////////////////////////////////////////////