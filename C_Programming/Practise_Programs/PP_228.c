//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_228
//
//  Description       : Implements insertion at the beginning
//                      and end of a doubly linked list and
//                      displays the list in both-direction link
//                      notation. Other operations remain stubs.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//  Time Complexity   : O(n) for Display and InsertLast.
//                      O(1) for InsertFirst.
//  Space Complexity  : O(n) for storing the linked-list nodes.
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
//  Description       : Displays all nodes of the doubly linked
//                      list using NULL and <=> link notation.
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
//  Description       : Placeholder function intended to count
//                      the nodes in the doubly linked list.
//                      Currently returns zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
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
//  Description       : Allocates a new node and inserts it at
//                      the beginning of the doubly linked list,
//                      updating the next and prev pointers.
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
//  Description       : Allocates a new node and inserts it at
//                      the end of the doubly linked list,
//                      updating the next and prev pointers.
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
//  Description       : Placeholder function intended to insert
//                      a new node at a specified position.
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
//  Description       : Placeholder function intended to delete
//                      the first node of the doubly linked list.
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
//  Description       : Placeholder function intended to delete
//                      the last node of the doubly linked list.
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
//  Description       : Placeholder function intended to delete
//                      a node at a specified position.
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
//  Description       : Creates a doubly linked list by inserting
//                      nodes at the beginning and end, then
//                      displays the complete list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 19/10/2026
//
//////////////////////////////////////////////////////////////////
int main()
{
    PNODE head = NULL;

    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    InsertLast(&head, 101);
    InsertLast(&head, 111);
    InsertLast(&head, 121);

    Display(head);

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
//
//////////////////////////////////////////////////////////////////