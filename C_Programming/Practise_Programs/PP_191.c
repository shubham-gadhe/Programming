//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_191
//
//  Description       : This program defines a structure named node
//                      using #pragma pack(1) to minimize padding
//                      and displays the size of the structure.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 09/10/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node obj;

    printf("%zu\n", sizeof(obj));

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
//  Note : The output may vary depending on the system architecture.
//         On a typical 64-bit system, the size is usually 12 bytes
//         with 4-byte int and 8-byte pointer when packing is applied.
//
//////////////////////////////////////////////////////////////////