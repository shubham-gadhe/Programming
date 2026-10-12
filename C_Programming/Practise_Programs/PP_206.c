//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_206
//
//  Description       : This program implements a singly linear linked
//                      list with operations to insert and delete nodes
//                      at the beginning, at the end, and at a specified
//                      position. It also displays the linked list and
//                      counts the total number of nodes.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/10/2026
//
//  Time Complexity   : InsertFirst   - O(1)
//                      InsertLast    - O(n)
//                      DeleteFirst   - O(1)
//                      DeleteLast    - O(n)
//                      Display       - O(n)
//                      Count         - O(n)
//                      InsertAtPos   - O(n)
//                      DeleteAtPos   - O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

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
//  Function Name     : InsertFirst()
//
//  Description       : Inserts a new node at the beginning of the
//                      linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
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
//  Description       : Inserts a new node at the end of the
//                      linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
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
//  Function Name     : DeleteFirst()
//
//  Description       : Deletes the first node of the linked list
//                      and releases its allocated memory.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/10/2026
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
//  Date              : 12/10/2026
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
//  Function Name     : Display()
//
//  Description       : Traverses the linked list and displays the
//                      data of each node followed by an arrow.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/10/2026
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
//  Description       : Counts and returns the total number of nodes
//                      in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/10/2026
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
//  Function Name     : InsertAtPos()
//
//  Description       : Inserts a new node at the specified position
//                      after validating the position. It uses
//                      InsertFirst() or InsertLast() for boundary
//                      positions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, int no, int pos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int iCnt = 0;
    int iSize = 0;

    iSize = Count(*first);

    if((pos < 1) || (pos > iSize + 1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(first, no);
    }
    else if(pos == iSize + 1)
    {
        InsertLast(first, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Deletes a node from the specified position
//                      after validating the position. It uses
//                      DeleteFirst() or DeleteLast() for boundary
//                      positions.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, int pos)
{
    int iCnt = 0;
    int iSize = 0;

    PNODE temp = NULL;
    PNODE target = NULL;

    iSize = Count(*first);

    if((pos < 1) || (pos > iSize))
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(first);
    }
    else if(pos == iSize)
    {
        DeleteLast(first);
    }
    else
    {
        temp = *first;

        for(iCnt = 1; iCnt < pos - 1; iCnt++)
        {
            temp = temp->next;
        }

        target = temp->next;

        temp->next = target->next;
        free(target);
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    InsertLast(&head, 101);
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

    InsertAtPos(&head, 105, 3);

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d\n", iRet);

    DeleteAtPos(&head, 3);

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
//      | 11 | -> | 21 | -> | 51 | -> NULL
//      Number of nodes are : 3
//      | 11 | -> | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//      Number of nodes are : 6
//      | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | -> NULL
//      Number of nodes are : 5
//      | 21 | -> | 51 | -> | 101 | -> | 111 | -> NULL
//      Number of nodes are : 4
//      | 21 | -> | 51 | -> | 105 | -> | 101 | -> | 111 | -> NULL
//      Number of nodes are : 5
//      | 21 | -> | 51 | -> | 101 | -> | 111 | -> NULL
//      Number of nodes are : 4
//
//////////////////////////////////////////////////////////////////