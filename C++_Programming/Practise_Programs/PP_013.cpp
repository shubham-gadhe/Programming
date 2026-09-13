//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_013
//
//  Description       : This program demonstrates the use of
//                      #pragma pack(1) to reduce structure/class
//                      padding and alignment.
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
}; 
 
int main() 
{ 
    ArrayX aobj; 
 
    cout<<sizeof(aobj)<<endl;   //16  
     
    return 0; 
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input :
//      No input required.
//
//  Sample Output :
//      12
//
//////////////////////////////////////////////////////////////////