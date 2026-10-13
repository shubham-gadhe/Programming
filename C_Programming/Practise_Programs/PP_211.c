//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_211
//
//  Description       : This program implements a singly linear linked
//                      list with functions to display nodes, count
//                      nodes, insert nodes at the beginning and end,
//                      and delete nodes. Some functions are currently
//                      incomplete.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 13/10/2026
//
//  Time Complexity   : Display       - O(n)
//                      Count         - O(1) for current implementation
//                      InsertFirst   - O(1)
//                      InsertLast    - O(1) for current partial
//                                      implementation
//                      InsertAtPos   - O(1) for current empty stub
//                      DeleteFirst   - O(1) for current empty stub
//                      DeleteLast    - O(1) for current empty stub
//                      DeleteAtPos   - O(1) for current empty stub
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
//  Description       : Traverses the linked list and displays the
//                      data stored in each node.
//
//////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("%d\t", first->data);
        first = first->next;
    }

    printf("\n");
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Returns the number of nodes in the linked list.
//                      Currently, the function returns zero.
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
//  Description       : Dynamically allocates a new node and inserts
//                      it at the beginning of the linked list.
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
//  Description       : Dynamically allocates a new node and inserts
//                      it at the end of the linked list. The insertion
//                      logic for a non-empty list is not implemented.
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
//  Description       : Inserts a new node at the specified position.
//                      Currently, the function is empty.
//
//////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Deletes the first node of the linked list.
//                      Currently, the function is empty.
//
//////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Deletes the last node of the linked list.
//                      Currently, the function is empty.
//
//////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Deletes the node at the specified position.
//                      Currently, the function is empty.
//
//////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, int iPos)
{}

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
//      11      21      51      101
//
//////////////////////////////////////////////////////////////////