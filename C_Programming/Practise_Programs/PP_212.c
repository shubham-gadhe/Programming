//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_212
//
//  Description       : Implements basic operations on a singly linked
//                      list, including display, insertion, deletion,
//                      and counting nodes. Some functions are currently
//                      incomplete.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
//
//  Time Complexity   : Display - O(n)
//                      Count - O(1) for current implementation
//                      InsertFirst - O(1)
//                      InsertLast - O(1) for current implementation
//                      Other empty functions - O(1)
//
//  Space Complexity  : O(1) auxiliary space
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
//  Description       : Displays all elements of the singly linked list
//                      in linked-list format.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
//
//////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    }

    printf("NULL\n");
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Intended to count the nodes in the linked list.
//                      Currently returns 0 without counting.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
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
//  Description       : Creates a new node and inserts it at the
//                      beginning of the singly linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast()
//
//  Description       : Creates a new node for insertion at the end
//                      of the list. The non-empty-list case is
//                      currently incomplete.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)
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
//  Description       : Intended to insert a new node at a specified
//                      position. The function is currently empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Intended to delete the first node of the list.
//                      The function is currently empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Intended to delete the last node of the list.
//                      The function is currently empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Intended to delete a node at a specified
//                      position. The function is currently empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Creates a singly linked list by inserting
//                      four nodes at the beginning and displays it.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      | 11 | -> | 21 | -> | 51 | -> | 101 | -> NULL
//
//////////////////////////////////////////////////////////////////