//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_225
//
//  Description       : Defines the structure and function
//                      prototypes for a doubly linked list.
//                      All linked-list operations are currently
//                      empty function stubs.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//  Time Complexity   : O(1) for the currently empty function
//                      implementations.
//  Space Complexity  : O(1) for the current program execution.
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
//  Function Name     : Display()
//
//  Description       : Placeholder function intended to display
//                      all nodes of the doubly linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void Display(PNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Placeholder function intended to count
//                      the nodes in the doubly linked list.
//                      Currently returns zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
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
//  Description       : Placeholder function intended to insert
//                      a new node at the beginning of the list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE first, int iNo)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast()
//
//  Description       : Placeholder function intended to insert
//                      a new node at the end of the list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void InsertLast(PPNODE first, int iNo)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Placeholder function intended to insert
//                      a new node at a specified position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void InsertAtPos(PPNODE first, int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Placeholder function intended to delete
//                      the first node of the list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void DeleteFirst(PPNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Placeholder function intended to delete
//                      the last node of the list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void DeleteLast(PPNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Placeholder function intended to delete
//                      a node at a specified position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void DeleteAtPos(PPNODE first, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Initializes an empty doubly linked list
//                      by setting the head pointer to NULL.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
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