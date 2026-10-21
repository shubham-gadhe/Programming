
//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_045
//
//  Description       : Demonstrates dynamic memory allocation
//                      for a structure using the new operator,
//                      initializes its members, displays the data,
//                      and releases memory using delete.
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
//  Description       : Dynamically allocates memory for a node,
//                      initializes its data and next pointer,
//                      displays the data, and frees the memory.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = 11;
    newn->next = NULL;

    cout<<newn->data<<endl;

    delete newn;
    
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      11
//
//////////////////////////////////////////////////////////////////
