//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_244
//
//  Description       : Implements display, count, insertion, and
//                      deletion operations for a Singly Circular
//                      Linked List and declares other operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/10/2026
//
//  Time Complexity   : Display()       - O(n)
//                      Count()         - O(n)
//                      InsertFirst()   - O(1)
//                      InsertLast()    - O(1)
//                      InsertAtPos()   - O(n)
//                      DeleteFirst()   - O(1)
//                      DeleteLast()    - O(n)
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
//  Description       : Represents a node containing integer data
//                      and a pointer to the next node.
//
//////////////////////////////////////////////////////////////////

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
//  Description       : Displays all elements of the circular linked
//                      list from the first node to the last node.
//                      Returns immediately if the list is empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/10/2026
//
//////////////////////////////////////////////////////////////////

void Display(PNODE first, PNODE last)
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    do
    {
        printf("| %d | -> ", first->data);
        first = first->next;
    } while (first != last->next);

    printf("\n");
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Counts and returns the total number of nodes
//                      present in the circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/10/2026
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
//  Function Name     : InsertFirst()
//
//  Description       : Allocates a new node and inserts it at the
//                      beginning of the circular linked list.
//                      Updates the first pointer and maintains
//                      the circular connection.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;        
    }

    (*last)->next = *first;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast()
//
//  Description       : Allocates a new node and inserts it at the
//                      end of the circular linked list.
//                      Updates the last pointer and maintains
//                      the circular connection.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertLast(PPNODE first, PPNODE last, int iNo)
{
     PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        (*last)->next = newn;
        *last = (*last)->next;        
    }

    (*last)->next = *first;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos()
//
//  Description       : Inserts a new node containing the given
//                      integer at the specified position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Deletes the first node from the circular
//                      linked list and updates the first pointer.
//                      Handles empty and single-node lists.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/10/2026
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
        *first = (*first)->next;        // CHANGE
        free((*last)->next);

        (*last)->next = *first;      
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Deletes the last node from the circular
//                      linked list and updates the last pointer.
//                      Handles empty and single-node lists.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/10/2026
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

    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Deletes the node located at the specified
//                      position in the circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, PPNODE last, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Initializes a circular linked list,
//                      inserts nodes at the beginning and end,
//                      displays the list and node count, deletes
//                      the first node, and displays the updated
//                      list and node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 29/10/2026
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
    printf("Number of nodes are : %d", iRet);  

    printf("\n");

    DeleteFirst(&head, &tail);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d", iRet); 

    printf("\n");

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input     : No input
//
//  Sample Output    : | 11 | -> | 21 | -> | 51 | -> | 101 | ->
//                      | 111 | -> | 121 | ->
//                      Number of nodes are : 6
//                      | 21 | -> | 51 | -> | 101 | ->
//                      | 111 | -> | 121 | ->
//                      Number of nodes are : 5
//
//////////////////////////////////////////////////////////////////