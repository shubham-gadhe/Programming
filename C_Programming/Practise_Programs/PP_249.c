//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_249
//
//  Description       : Implements insertion operations for a
//                      Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
//
//  Time Complexity   : Display()       - O(n)
//                      Count()         - O(n)
//                      InsertFirst()   - O(1)
//                      InsertLast()    - O(1)
//                      InsertAtPos()   - O(n)
//                      DeleteFirst()   - O(1)
//                      DeleteLast()    - O(1)
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
//  Description       : Represents a node of a Doubly Circular
//                      Linked List.
//
//////////////////////////////////////////////////////////////////

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
//  Function Name     : Display
//
//  Description       : Displays all elements of the Doubly
//                      Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
//
//////////////////////////////////////////////////////////////////

void Display(PNODE first, PNODE last)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count
//
//  Description       : Counts the total number of nodes in the
//                      Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
//
//////////////////////////////////////////////////////////////////

int Count(PNODE first, PNODE last)
{
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst
//
//  Description       : Inserts a new node at the beginning of
//                      the Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
    }

    (*last)->next = *first;
    (*first)->prev = *last;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast
//
//  Description       : Inserts a new node at the end of the
//                      Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, PPNODE last, int iNo)
{
     PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {

    }

    (*last)->next = *first;
    (*first)->prev = *last;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos
//
//  Description       : Inserts a new node at the specified
//                      position in the Doubly Circular
//                      Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst
//
//  Description       : Deletes the first node from the Doubly
//                      Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE first, PPNODE last)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast
//
//  Description       : Deletes the last node from the Doubly
//                      Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE first, PPNODE last)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos
//
//  Description       : Deletes a node from the specified
//                      position in the Doubly Circular
//                      Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, PPNODE last, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates a Doubly Circular Linked List
//                      by inserting elements at the beginning.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    printf("\n");

    InsertFirst(&head, &tail, 51);
    InsertFirst(&head, &tail, 21);
    InsertFirst(&head, &tail, 11);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input     :
//
//  Sample Output    :
//
//////////////////////////////////////////////////////////////////