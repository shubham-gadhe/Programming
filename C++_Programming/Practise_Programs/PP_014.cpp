//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_014
//
//  Description       : This program demonstrates a parameterized
//                      constructor in a C++ class and shows why
//                      a default constructor is required when an
//                      object is created without arguments.
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
    ArrayX aobj;        // ERROR

    cout<<sizeof(aobj)<<endl;   
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      Compilation Error
//
//  Reason:
//      ArrayX has a parameterized constructor:
//
//          ArrayX(int X)
//
//      Therefore, the compiler does not automatically provide a
//      default constructor.
//
//      But the object is created without an argument:
//
//          ArrayX aobj;
//
//      This requires a default constructor:
//
//          ArrayX()
//
//      Since it does not exist, the program gives a compilation
//      error.
//
//////////////////////////////////////////////////////////////////