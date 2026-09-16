//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_026
//
//  Description       : Parametrised Constructor with Default Argument
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 16/09/2026
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
        ArrayX(int X = 5)
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
    ArrayX *aobj1 = new ArrayX;        
    ArrayX *aobj2 = new ArrayX(15);     

    delete aobj1;                      
    delete aobj2;                       
    
    return 0;
}