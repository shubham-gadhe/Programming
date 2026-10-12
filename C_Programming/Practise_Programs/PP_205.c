//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_205
//
//  Description       : This program displays all elements of a linked
//                      list using the Display function and counts the
//                      total number of nodes using the Count function.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/10/2026
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display()
//
//  Description       : Traverses the linked list and displays the
//                      data stored in each node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/10/2026
//
//////////////////////////////////////////////////////////////////

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("%d\n", first->data);
        first = first->next;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count()
//
//  Description       : Counts the total number of nodes by traversing
//                      the linked list until the pointer reaches NULL.
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

int main()
{
    PNODE head = NULL;

    int iRet = 0;

    NODE obj1, obj2, obj3;

    head = &obj1;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    Display(head);
    iRet = Count(head);

    printf("Number of nodes are : %d", iRet);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      11
//      21
//      51
//      Number of nodes are : 3
//
//////////////////////////////////////////////////////////////////