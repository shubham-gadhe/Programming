//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_233
//
//  Description       : Program to implement a Doubly Linear Linked
//                      List with insertion, deletion, display,
//                      counting, and position-based insertion.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/10/2026
//
//  Time Complexity   : O(n) for Display, Count, InsertLast,
//                      DeleteLast, InsertAtPos, and DeleteAtPos;
//                      O(1) for InsertFirst and DeleteFirst
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
//  Date              : 20/10/2026
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
//  Date              : 20/10/2026
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
//  Date              : 20/10/2026
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
//  Date              : 20/10/2026
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
//  Description       : Inserts a new node at the specified
//                      position after validating the position.
//                      Delegates insertion at the beginning or
//                      end to the respective functions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, int iNo, int iPos)
{
    int iCount = 0;
    int i = 0;

    PNODE temp = NULL;
    PNODE newn = NULL;

    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount + 1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(first, iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first, iNo);
    }
    else
    {
        temp = *first;

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Deletes the first node of the doubly
//                      linked list and updates the head pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE first)
{
    if(NULL == *first)
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
        *first = (*first)->next;
        free((*first)->prev);
        (*first)->prev = NULL;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Deletes the last node of the doubly linked
//                      list and updates the previous node's
//                      next pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(NULL == *first)
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
//  Description       : Validates the specified position and
//                      deletes the first or last node.
//                      Deletion at an intermediate position
//                      is not yet implemented.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, int iPos)
{
    int iCount = 0;

    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(first);
    }
    else if(iPos == iCount)
    {
        DeleteLast(first);
    }
    else
    {

    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Creates a doubly linked list, inserts
//                      elements at the beginning and end,
//                      displays and counts nodes, deletes the
//                      first and last nodes, and inserts an
//                      element at a specified position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 20/10/2026
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
    InsertLast(&head, 151);

    Display(head);
    iRet = Count(head);
    printf("Number of elements are : %d\n", iRet);

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of elements are : %d\n", iRet);

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of elements are : %d\n", iRet);

    InsertAtPos(&head, 105, 4);

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
//      NULL <=>| 11 | <=> | 21 | <=> | 51 | <=> | 101 | <=> | 111 | <=> | 121 | <=> | 151 | <=> NULL
//      Number of elements are : 7
//
//      NULL <=>| 21 | <=> | 51 | <=> | 101 | <=> | 111 | <=> | 121 | <=> | 151 | <=> NULL
//      Number of elements are : 6
//
//      NULL <=>| 21 | <=> | 51 | <=> | 101 | <=> | 111 | <=> | 121 | <=> NULL
//      Number of elements are : 5
//
//      NULL <=>| 21 | <=> | 51 | <=> | 101 | <=> | 105 | <=> | 111 | <=> | 121 | <=> NULL
//      Number of elements are : 6
//
//////////////////////////////////////////////////////////////////