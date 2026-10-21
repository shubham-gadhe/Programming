
//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_044
//
//  Description       : Demonstrates the use of structure packing
//                      using #pragma pack(1) and displays the
//                      size of a structure variable.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/10/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//////////////////////////////////////////////////////////////////
//
//  Method Name       : main()
//
//  Description       : Creates a structure variable and displays
//                      the size of the structure.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    NODE obj;
    
    cout<<sizeof(obj)<<endl;
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      12
//
//  Note:
//      With #pragma pack(1), the structure has no padding between
//      members. On a typical 64-bit system, int occupies 4 bytes
//      and a pointer occupies 8 bytes, so sizeof(obj) is 12.
//
//      The output may differ depending on the system and compiler.
//
//////////////////////////////////////////////////////////////////