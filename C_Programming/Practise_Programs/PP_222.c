//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_222
//
//  Description       : Implements a singly linked list with
//                      insertion, deletion, display, and counting
//                      operations, including insertion at a
//                      specified position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//  Time Complexity   : O(n) for Display, Count, InsertLast,
//                      DeleteLast, and InsertAtPos.
//                      O(1) for InsertFirst and DeleteFirst.
//  Space Complexity  : O(n) for storing the linked list.
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
//  Description       : Inserts a new node at the specified
//                      position in the linked list. Delegates
//                      to InsertFirst() or InsertLast() when
//                      inserting at either end.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void InsertAtPos(PPNODE first, int iNo, int iPos)
{
    int iCount = 0;
    int i = 0;

    PNODE newn = NULL;
    PNODE temp = NULL;

    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount + 1))
    {
        printf("Invalid Position");
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
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;

        temp = *first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

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
//  Description       : Intended to delete a node at a specified
//                      position. The current position validation
//                      condition and missing middle-position
//                      deletion logic make this function
//                      incomplete.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void DeleteAtPos(PPNODE first, int iPos)
{
    int iCount = 0;

    iCount = Count(*first);

    if((iPos < 1) || (iPos < iCount))
    {
        printf("Invalid Position");
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
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Demonstrates linked-list insertion,
//                      deletion, display, and node counting,
//                      including insertion at a given position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
int main()
{
    PNODE head = NULL;

    int iRet = 0;

    printf("\n");

    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    printf("\n");

    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    printf("\n");

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    printf("\n");

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    printf("\n");

    InsertAtPos(&head, 105, 4);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    printf("\n");

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//
//      | 11 | -> | 21 | -> | 51 | -> | 101 | -> NULL
//      Number of nodes are : 4
//
//      | 11 | -> | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//      Number of nodes are : 6
//
//      | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//      Number of nodes are : 5
//
//      | 21 | -> | 51 | -> | 101 | -> | 111 | -> NULL
//      Number of nodes are : 4
//
//      | 21 | -> | 51 | -> | 105 | -> | 101 | -> | 111 | -> NULL
//      Number of nodes are : 5
//
//////////////////////////////////////////////////////////////////