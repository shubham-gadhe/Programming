//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_024
//
//  Description       : This program demonstrates encapsulation
//                      and data hiding by keeping the data members
//                      private while providing a public constructor
//                      and destructor.
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

        ~ArrayX()
        {
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
//      No output.
//
//  Explanation:
//      The constructor allocates memory for the array, and
//      delete aobj1 calls the destructor, which releases the
//      allocated array memory.
//
//////////////////////////////////////////////////////////////////