//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_209
//
//  Description       : This program defines the structure and function
//                      prototypes for a singly linear linked list.
//                      It includes functions for displaying nodes,
//                      counting nodes, inserting nodes, and deleting
//                      nodes at different positions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
//
//  Time Complexity   : O(1) for the current empty function stubs
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

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display()
//
//  Description       : Displays the data stored in each node of the
//                      linked list.
//
//////////////////////////////////////////////////////////////////

void Display(PNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Returns the number of nodes in the linked list.
//
//////////////////////////////////////////////////////////////////

int Count(PNODE first)
{
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst()
//
//  Description       : Inserts a new node at the beginning of the
//                      linked list.
//
//////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int iNo)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast()
//
//  Description       : Inserts a new node at the end of the linked
//                      list.
//
//////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, int iNo)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Inserts a new node at the specified position
//                      in the linked list.
//
//////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Deletes the first node of the linked list.
//
//////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Deletes the last node of the linked list.
//
//////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Deletes the node at the specified position
//                      in the linked list.
//
//////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, int iPos)
{}

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