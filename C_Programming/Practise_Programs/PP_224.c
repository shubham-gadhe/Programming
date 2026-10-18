//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_224
//
//  Description       : Demonstrates the size of a doubly linked
//                      list node structure using #pragma pack(1)
//                      to minimize member alignment padding.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Prints the size of the NODE structure
//                      in bytes.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
int main()
{
    printf("%d\n", sizeof(NODE)); 

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      20
//
//  Note           : The output depends on the platform's data
//                   type sizes and pointer sizes. With 4-byte
//                   int and 8-byte pointers, #pragma pack(1)
//                   typically results in 20 bytes.
//
//////////////////////////////////////////////////////////////////