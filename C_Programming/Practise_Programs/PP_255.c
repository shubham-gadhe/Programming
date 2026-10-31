//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_255
//
//  Description       : Implements display, count, insertion, and
//                      deletion operations for a Doubly Circular
//                      Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/10/2026
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
//  Date              : 31/10/2026
//
//////////////////////////////////////////////////////////////////

void Display(PNODE first, PNODE last)
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    printf(" <=> ");
    do
    {
        printf(" | %d | <=> ", first->data);
        first = first->next;        
    } while (first != last->next);

    printf("\n");    
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count
//
//  Description       : Counts the total number of nodes in the
//                      Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/10/2026
//
//////////////////////////////////////////////////////////////////

int Count(PNODE first, PNODE last)
{
    int iCount = 0;

    if(first == NULL && last == NULL)
    {
        return iCount;
    }

    do
    {
        iCount++;
        first = first->next;        
    } while (first != last->next);

    return iCount;  
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst
//
//  Description       : Inserts a new node at the beginning of
//                      the Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/10/2026
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
//  Date              : 31/10/2026
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
        (*last)->next = newn;
        newn->prev = *last;
        *last = newn;
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
//  Date              : 31/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0;
    int iCount = 0;

    iCount = Count(*first, *last);

    if((iPos < 1) || (iPos > iCount + 1))
    {
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(first, last, iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first, last, iNo);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *first;

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
//  Function Name     : DeleteFirst
//
//  Description       : Deletes the first node from the Doubly
//                      Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*first)->prev);

        (*last)->next = *first;
        (*first)->prev = *last;
    }    
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast
//
//  Description       : Deletes the last node from the Doubly
//                      Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE first, PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        return;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last = NULL;
    }
    else
    {
        *last = (*last)->prev;
        free((*last)->next);

        (*last)->next = *first;
        (*first)->prev = *last;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos
//
//  Description       : Deletes a node from the specified
//                      position in the Doubly Circular
//                      Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, PPNODE last, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates a Doubly Circular Linked List,
//                      displays and counts its nodes, deletes
//                      the first and last nodes, and inserts a
//                      new node at a specified position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 31/10/2026
//
//////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;

    printf("\n");

    InsertFirst(&head, &tail, 51);
    InsertFirst(&head, &tail, 21);
    InsertFirst(&head, &tail, 11);

    InsertLast(&head, &tail, 101);
    InsertLast(&head, &tail, 111);
    InsertLast(&head, &tail, 121);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d\n", iRet);

    printf("\n");

    DeleteFirst(&head, &tail);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d\n", iRet);

    printf("\n");

    DeleteLast(&head, &tail);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d\n", iRet);

    printf("\n");

    InsertAtPos(&head, &tail, 105 , 4);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d\n", iRet);

    printf("\n");

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input     :
//
//  Sample Output    :
//
//   <=>  | 11 | <=>  | 21 | <=>  | 51 | <=>  | 101 | <=>  | 111 | <=>  | 121 | <=>
//  Number of nodes are : 6
//
//   <=>  | 21 | <=>  | 51 | <=>  | 101 | <=>  | 111 | <=>  | 121 | <=>
//  Number of nodes are : 5
//
//   <=>  | 21 | <=>  | 51 | <=>  | 101 | <=>  | 111 | <=>
//  Number of nodes are : 4
//
//   <=>  | 21 | <=>  | 51 | <=>  | 105 | <=>  | 101 | <=>  | 111 | <=>
//  Number of nodes are : 5
//
//////////////////////////////////////////////////////////////////