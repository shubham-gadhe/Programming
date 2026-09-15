//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_021
//
//  Description       : This program demonstrates dynamic memory
//                      allocation of an object and accessing its
//                      public data member using the arrow operator.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 15/09/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(n)
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

        ArrayX(int X)
        {
            iSize = X;              
            Arr = new int[iSize];   
        }

        ~ArrayX()
        {
            delete []Arr;
        }
};

int main()
{ 
    ArrayX *aobj1 = new ArrayX(5);
    
    cout<<aobj1->iSize<<"\n";

    delete aobj1;
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      5
//
//////////////////////////////////////////////////////////////////