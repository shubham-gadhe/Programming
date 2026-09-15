//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_023
//
//  Description       : This program demonstrates data hiding using
//                      private data members in a C++ class. The
//                      private members cannot be directly accessed
//                      from outside the class.
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
    private:
        int *Arr;
        int iSize;

    public:
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
    
    aobj -> iSize = 0;              // Error

    aobj1->Arr = NULL;              // Error

    delete aobj1;
    
    return 0;
}