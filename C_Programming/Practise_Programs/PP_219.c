//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_219
//
//  Description       : Implements singly linked list operations,
//                      including displaying elements, counting nodes,
//                      inserting nodes at the beginning, and inserting
//                      nodes at the end of the list. Some functions
//                      are currently incomplete.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/10/2026
//
//  Time Complexity   : Display - O(n)
//                      Count - O(n)
//                      InsertFirst - O(1)
//                      InsertLast - O(n)
//                      Other empty functions - O(1)
//
//  Space Complexity  : O(1) auxiliary space
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
//  Description       : Displays all elements of the singly linked
//                      list in linked-list format.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/10/2026
//
//////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    while(first)
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
//                      present in the singly linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/10/2026
//
//////////////////////////////////////////////////////////////////

int Count(PNODE first)
{
    int iCount = 0;

    while(first)
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
//  Description       : Creates a new node and inserts it at the
//                      beginning of the singly linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/10/2026
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
//  Description       : Creates a new node and inserts it at the end
//                      of the singly linked list. Traverses the list
//                      to locate the last node before linking it.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/10/2026
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
//  Description       : Intended to insert a new node at a specified
//                      position. The function is currently empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/10/2026
//
//////////////////////////////////////////////////////////////////

void InsertAtPos(PPNODE first, int iNo, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst()
//
//  Description       : Intended to delete the first node of the
//                      singly linked list. The function is empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast()
//
//  Description       : Intended to delete the last node of the
//                      singly linked list. The function is empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE first)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos()
//
//  Description       : Intended to delete a node at a specified
//                      position. The function is currently empty.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/10/2026
//
//////////////////////////////////////////////////////////////////

void DeleteAtPos(PPNODE first, int iPos)
{}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main()
//
//  Description       : Inserts four nodes at the beginning and
//                      displays the list and its node count.
//                      Then inserts two nodes at the end and
//                      displays the updated list and node count.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 17/10/2026
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
//
//////////////////////////////////////////////////////////////////