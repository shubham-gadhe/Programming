//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_019
//
//  Description       : This program demonstrates dynamic memory
//                      allocation of a C++ object using the new
//                      operator and explicitly releases the object
//                      using the delete operator.
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

    delete aobj1;

    cout<<"End of main\n";
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      Inside Constructor
//      Inside Destructor
//      End of main
//
//////////////////////////////////////////////////////////////////