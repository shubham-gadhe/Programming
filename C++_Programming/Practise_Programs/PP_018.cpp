//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_018
//
//  Description       : This program demonstrates dynamic memory
//                      allocation for a C++ object using the new
//                      operator. It also demonstrates that the
//                      destructor is not automatically called when
//                      a dynamically allocated object is not deleted.
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
            cout<<"Inside Constructor\n";
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
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      Inside Constructor
//
//////////////////////////////////////////////////////////////////