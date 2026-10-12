//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_204
//
//  Description       : This program counts the total number of nodes
//                      in a linked list using the Count function
//                      and displays the result.
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
//      Number of nodes are : 3
//
//////////////////////////////////////////////////////////////////