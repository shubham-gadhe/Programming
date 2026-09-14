//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_017
//
//  Description       : This program demonstrates a parameterized
//                      constructor and destructor. The constructor
//                      initializes the object characteristics and
//                      dynamically allocates memory. The destructor
//                      releases the allocated memory.
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
    ArrayX aobj1(5);          
    
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
//
//////////////////////////////////////////////////////////////////