//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_309
//
//  Description       : Singly Linear Linked List
//                      Recursive Display, InsertFirst and Count
//                      Operations
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/11/2026
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////
//
//  Structure Name    : node
//
//  Description       : Stores data and address of the next node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/11/2026
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
//  Function Name     : Display
//
//  Description       : Recursively displays all elements of
//                      the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/11/2026
//
//  Input             : First node of the linked list.
//
//  Output            : Displays all node elements.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n) - Recursive call stack
//
//////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    if(first != NULL)
    {
        printf("| %d | -> ", first -> data);
        first = first -> next;
        Display(first);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count
//
//  Description       : Counts the total number of nodes
//                      present in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/11/2026
//
//  Input             : First node of the linked list.
//
//  Output            : Returns the total number of nodes.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int Count(PNODE first)
{
    int iCount = 0;

    while(first != NULL)
    {
        iCount++;
        first = first -> next;
    }

    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst
//
//  Description       : Inserts a new node at the beginning
//                      of the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/11/2026
//
//  Input             : Address of the first node and integer value.
//
//  Output            : Inserts a new node at the beginning.
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn -> next = *first;
        *first = newn;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates a singly linear linked list,
//                      inserts elements, recursively displays
//                      the list and counts the total nodes.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 21/11/2026
//
//  Input             : No user input.
//
//  Output            : Displays the linked list and node count.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(n)
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
    printf("\nNumber of nodes are : %d\n", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  No input required.
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  | 11 | -> | 21 | -> | 51 | -> | 101 | ->
//  Number of nodes are : 4
//
//////////////////////////////////////////////////////////////////