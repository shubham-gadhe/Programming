//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_020
//
//  Description       : This program demonstrates dynamic memory
//                      allocation of an object using a parameterized
//                      constructor and memory deallocation using a
//                      destructor.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 14/09/2026
//
//  Time Complexity   : O(n)
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
            cout<<"Inside Destructor\n";
            delete []Arr;           
        }
};

int main()
{ 
    ArrayX *aobj1 = new ArrayX(5);

    delete aobj1;
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      Inside Destructor
//
//////////////////////////////////////////////////////////////////