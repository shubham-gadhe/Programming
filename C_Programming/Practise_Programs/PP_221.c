//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_221
//
//  Description       : Singly Linked List implementation with
//                      insertion, deletion, display, and counting
//                      operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//  Time Complexity   : O(n) for Display, Count, InsertLast, and
//                      DeleteLast; O(1) for InsertFirst and
//                      DeleteFirst.
//  Space Complexity  : O(n) for storing the linked list.
//
//  Note              : InsertAtPos() and DeleteAtPos() are
//                      currently empty functions.
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
typedef struct node* PNODE;
typedef struct node** PPNODE;

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display()
//
//  Description       : Displays all elements of the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
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
//  Description       : Counts and returns the number of nodes
//                      present in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
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
//                      the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(NULL == *first)
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
//  Description       : Inserts a new node at the end of the
//                      linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)
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
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Placeholder function intended to insert
//                      a node at a specified position.
//                      The implementation is currently empty.
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
//  Description       : Deletes the first node of the linked list
//                      and releases its allocated memory.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        *first = (*first)->next;

        free(temp);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Deletes the last node of the linked list
//                      and releases its allocated memory.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        free(temp->next);
        temp->next = NULL;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Placeholder function intended to delete
//                      a node at a specified position.
//                      The implementation is currently empty.
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
//  Description       : Creates a singly linked list, inserts
//                      nodes at the beginning and end, displays
//                      the list, counts nodes, and deletes the
//                      first and last nodes.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
int main()
{
    PNODE head = NULL;

    int iRet = 0;

    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    DeleteFirst(&head);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    DeleteLast(&head);

    Display(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      | 11 | -> | 21 | -> | 51 | -> | 101 | -> NULL
//      Number of nodes are : 4
//      | 11 | -> | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//      Number of nodes are : 6
//      | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//      Number of nodes are : 5
//      | 21 | -> | 51 | -> | 101 | -> | 111 | -> NULL
//      Number of nodes are : 4
//
//////////////////////////////////////////////////////////////////