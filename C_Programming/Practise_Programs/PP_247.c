//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_247
//
//  Description       : Implements display, count, insertion, and
//                      deletion operations for a Singly Circular
//                      Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
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
//  Date              : 30/10/2026
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
//  Date              : 30/10/2026
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
//  Date              : 30/10/2026
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
//  Date              : 30/10/2026
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
//                      Validates the position and handles insertion
//                      at the beginning, end, and middle.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{
    int i = 0;
    int iCount = 0;
    PNODE newn = NULL;    
    PNODE temp = NULL;

    iCount = Count(*first, *last);

    if((iPos < 1) ||(iPos < iCount + 1))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(first,last,iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first,last,iNo);
    }
    else
    {
        temp = *first;

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;

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
//  Description       : Deletes the first node from the circular
//                      linked list and updates the first pointer.
//                      Handles empty and single-node lists.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
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
//  Date              : 30/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE first, PPNODE last)
{
    PNODE temp = NULL;

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
        temp = *first;

        while(temp->next != *last)
        {
            temp = temp->next;
        }

        free(*last);        // free(temp->temp);

        *last = temp;

        (*last)->next = *first;        
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Deletes the node located at the specified
//                      position in the circular linked list.
//                      Validates the position and handles deletion
//                      at the beginning, end, and middle.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, PPNODE last, int iPos)
{
    int i = 0;
    int iCount = 0;
    PNODE target = NULL;    
    PNODE temp = NULL;

    iCount = Count(*first, *last);

    if((iPos < 1) ||(iPos > iCount))
    {
        printf("Invalid Position\n");
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst(first,last);
    }
    else if(iPos == iCount)
    {
        DeleteLast(first,last);
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
//  Description       : Initializes a circular linked list,
//                      inserts nodes at the beginning and end,
//                      displays the list and node count, deletes
//                      the first and last nodes, inserts a node at
//                      a specified position, and deletes a node
//                      from the specified position.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 30/10/2026
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
    printf("Number of nodes are : %d \n", iRet);  

    printf("\n");

    DeleteFirst(&head, &tail);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d \n", iRet);

    printf("\n");

    DeleteLast(&head, &tail);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d \n", iRet); 

    printf("\n");

    InsertAtPos(&head, &tail, 105, 5);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d \n", iRet);

    printf("\n");

    DeleteAtPos(&head, &tail, 4);

    Display(head, tail);
    iRet = Count(head, tail);
    printf("Number of nodes are : %d \n", iRet); 

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input     : No input
//
//  Sample Output    : | 11 | -> | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | ->
//                      Number of nodes are : 6
//
//                      | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | ->
//                      Number of nodes are : 5
//
//                      | 21 | -> | 51 | -> | 101 | -> | 111 | ->
//                      Number of nodes are : 4
//
//                      Invalid Position
//
//                      | 21 | -> | 51 | -> | 101 | -> | 111 | ->
//                      Number of nodes are : 4
//
//////////////////////////////////////////////////////////////////