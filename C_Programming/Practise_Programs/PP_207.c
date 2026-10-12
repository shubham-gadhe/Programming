//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_207
//
//  Description       : This program defines a node structure for a
//                      singly linear linked list and declares a head
//                      pointer initialized to NULL.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/10/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int main()
{
    PNODE head = NULL;

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      No output.
//
//////////////////////////////////////////////////////////////////