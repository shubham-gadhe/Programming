//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_025
//
//  Description       : This program demonstrates constructor
//                      overloading using a default constructor and
//                      a parameterized constructor. It also
//                      demonstrates dynamic memory allocation and
//                      deallocation.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 15/09/2026
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
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int X)
        {
            iSize = X;              
            Arr = new int[iSize];   
        }

        ArrayX()
        {
            iSize = 5;              
            Arr = new int[iSize];   
        }

        ~ArrayX()
        {
            delete []Arr;
        }
};

int main()
{ 
    ArrayX *aobj1 = new ArrayX;         // Default Constructor
    ArrayX *aobj2 = new ArrayX(5);      // Parametrised Constrctor
   
    delete aobj1;
    delete aobj2;
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      No output.
//
//////////////////////////////////////////////////////////////////