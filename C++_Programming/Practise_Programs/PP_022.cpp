//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_022
//
//  Description       : This program demonstrates dynamic memory
//                      allocation, accessing members using the
//                      arrow operator, and the issue caused by
//                      losing the address of dynamically allocated
//                      memory.
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

    cout<<aobj1->iSize<<"\n";       // Issue

    aobj1->Arr = NULL;              // Issue

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