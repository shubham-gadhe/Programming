//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_229
//
//  Description       : Program to implement a Doubly Linear Linked
//                      List with insertion, display, and counting
//                      operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//  Time Complexity   : O(n) for Display, Count, and InsertLast;
//                      O(1) for InsertFirst
//  Space Complexity  : O(n) for storing n nodes
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
//  Description       : Displays all elements of the doubly linked
//                      list from beginning to end.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    printf("\nNULL <=>");

    while(first != NULL)
    {
        printf("| %d | <=> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Counts and returns the total number of
//                      nodes present in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//////////////////////////////////////////////////////////////////

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first->next;
    }

    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst()
//
//  Description       : Inserts a new node at the beginning of
//                      the doubly linked list.
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
//  Description       : Inserts a new node at the end of the
//                      doubly linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

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
        temp = *first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Placeholder for inserting a node at a
//                      specified position in the linked list.
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
//  Description       : Placeholder for deleting the first node
//                      of the linked list.
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
//  Description       : Placeholder for deleting the last node
//                      of the linked list.
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
//  Description       : Placeholder for deleting a node from a
//                      specified position in the linked list.
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
//  Description       : Creates a doubly linked list, inserts
//                      elements at the beginning and end,
//                      displays the list, and counts its nodes.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);

    iRet = Count(head);

    printf("Number of elements are : %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//
//      NULL <=>| 11 | <=> | 21 | <=> | 51 | <=> | 101 | <=> | 111 | <=> | 121 | <=> NULL
//      Number of elements are : 6
//
//////////////////////////////////////////////////////////////////