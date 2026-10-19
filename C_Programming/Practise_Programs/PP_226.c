//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_226
//
//  Description       : Implements the initial operations of a
//                      doubly linked list, including insertion
//                      at the beginning. InsertLast() is only
//                      partially implemented, while the remaining
//                      operations are empty function stubs.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//  Time Complexity   : O(1) for InsertFirst.
//                      O(1) for the current partial InsertLast
//                      implementation.
//  Space Complexity  : O(n) for storing the linked-list nodes.
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
//  Date              : 19/10/2026
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
//  Date              : 19/10/2026
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
//  Description       : Allocates a new node and inserts it at
//                      the beginning of the doubly linked list,
//                      updating the next and prev pointers.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(NULL == *first)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast()
//
//  Description       : Allocates and initializes a new node.
//                      The insertion logic for a non-empty list
//                      is currently incomplete.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//////////////////////////////////////////////////////////////////
void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(NULL == *first)
    {
        *first = newn;
    }
    else
    {

    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Placeholder function intended to insert
//                      a new node at a specified position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//////////////////////////////////////////////////////////////////
void InsertAtPos(PPNODE first, int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Placeholder function intended to delete
//                      the first node of the doubly linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//////////////////////////////////////////////////////////////////
void DeleteFirst(PPNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Placeholder function intended to delete
//                      the last node of the doubly linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
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
//  Date              : 19/10/2026
//
//////////////////////////////////////////////////////////////////
void DeleteAtPos(PPNODE first, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Initializes an empty doubly linked list
//                      and inserts three nodes at the beginning.
//                      No output is displayed.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//////////////////////////////////////////////////////////////////
int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

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