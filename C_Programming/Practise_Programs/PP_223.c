//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_223
//
//  Description       : Implements a singly linked list with
//                      insertion, deletion, display, and counting
//                      operations at the beginning, end, and
//                      specified positions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//  Time Complexity   : O(n) for Display, Count, InsertLast,
//                      InsertAtPos, DeleteLast, and DeleteAtPos.
//                      O(1) for InsertFirst and DeleteFirst.
//
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
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Inserts a new node at the specified
//                      position in the linked list.
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
//  Description       : Deletes a node from the specified valid
//                      position in the linked list and releases
//                      the node's allocated memory.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
void DeleteAtPos(PPNODE first, int iPos)
{
    int iCount = 0;
    int i = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount))
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
    else
    {
        temp = *first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;

        free(target);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Demonstrates insertion and deletion at
//                      the beginning, end, and a specified
//                      position, displaying the list and node
//                      count after each operation.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 18/10/2026
//
//////////////////////////////////////////////////////////////////
int main()
{
    PNODE head = NULL;

    int iRet = 0;

    printf("\nInsert First Node:\n");

    InsertFirst(&head, 101);
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    printf("\nInsert Last Node:\n");

    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    printf("\nInsert Node At Position:\n");

    InsertAtPos(&head, 105, 4);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    printf("\nDelete first Node:\n");

    DeleteFirst(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    printf("\nDelete Last Node:\n");

    DeleteLast(&head);

    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);

    printf("\nDelete Node At Position:\n");

    DeleteAtPos(&head, 4);

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
//
//  Insert First Node:
//  | 11 | -> | 21 | -> | 51 | -> | 101 | -> NULL
//  Number of nodes are : 4
//
//  Insert Last Node:
//  | 11 | -> | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//  Number of nodes are : 6
//
//  Insert Node At Position:
//  | 11 | -> | 21 | -> | 51 | -> | 105 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//  Number of nodes are : 7
//
//  Delete first Node:
//  | 21 | -> | 51 | -> | 105 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//  Number of nodes are : 6
//
//  Delete Last Node:
//  | 21 | -> | 51 | -> | 105 | -> | 101 | -> | 111 | -> NULL
//  Number of nodes are : 5
//
//  Delete Node At Position:
//  | 21 | -> | 51 | -> | 105 | -> | 111 | -> NULL
//  Number of nodes are : 4
//
//////////////////////////////////////////////////////////////////