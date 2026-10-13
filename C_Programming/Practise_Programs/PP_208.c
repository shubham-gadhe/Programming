//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_208
//
//  Description       : This program defines a node structure using
//                      typedef and declares aliases NODE, PNODE, and
//                      PPNODE for a node, a node pointer, and a
//                      pointer to a node pointer, respectively.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

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