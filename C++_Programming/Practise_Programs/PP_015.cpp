//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_015
//
//  Description       : This program demonstrates the use of a
//                      parameterized constructor and the effect
//                      of #pragma pack(1) on object size.
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

#pragma pack(1)

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX (int X)
        {

        }
};

int main()
{
    ArrayX aobj(5);     

    cout<<sizeof(aobj)<<endl;   
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      12
//
//////////////////////////////////////////////////////////////////