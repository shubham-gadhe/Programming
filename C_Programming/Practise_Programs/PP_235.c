//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_235
//
//  Description       : Declaration of functions for a Singly Circular
//                      Linked List using structures and pointers.
//                      Includes display, counting, insertion, and
//                      deletion operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/10/2026
//
//  Time Complexity   : Display()       - O(n)
//                      Count()         - O(n)
//                      InsertFirst()   - O(1)
//                      InsertLast()    - O(1)
//                      InsertAtPos()   - O(n)
//                      DeleteFirst()   - O(1)
//                      DeleteLast()    - O(n)
//                      DeleteAtPos()   - O(n)
//
//  Space Complexity  : O(n), where n is the number of nodes.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Structure Name    : node
//
//  Description       : Represents a node containing integer data
//                      and a pointer to the next node.
//
//////////////////////////////////////////////////////////////////

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
//  Function Name     : Display()
//
//  Description       : Displays all elements of the circular linked
//                      list by traversing from first to last node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/10/2026
//
//////////////////////////////////////////////////////////////////

void Display(PNODE first, PNODE last)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Returns the total number of nodes present
//                      in the circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/10/2026
//
//////////////////////////////////////////////////////////////////

int Count(PNODE first, PNODE Last)
{
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst()
//
//  Description       : Inserts a new node containing the given
//                      integer at the beginning of the list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, PPNODE last, int iNo)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast()
//
//  Description       : Inserts a new node containing the given
//                      integer at the end of the list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, PPNODE last, int iNo)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Inserts a new node containing the given
//                      integer at the specified position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Deletes the first node from the circular
//                      linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE first, PPNODE last)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Deletes the last node from the circular
//                      linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE first, PPNODE last)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Deletes the node located at the specified
//                      position in the circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, PPNODE last, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Initializes the head and tail pointers to NULL
//                      for an initially empty circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 28/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input     : No input
//
//  Sample Output    : No output
//
//////////////////////////////////////////////////////////////////