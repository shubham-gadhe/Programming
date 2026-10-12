//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_203
//
//  Description       : This program dynamically allocates memory for
//                      a node, initializes its data and next pointer,
//                      and displays the data stored in the node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 12/10/2026
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
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

int main()
{
    struct node *newn = NULL;

    newn = (struct node *)malloc(sizeof(struct node));

    newn->data = 11;
    newn->next = NULL;

    printf("%d\n", newn->data);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input  :
//      No input required.
//
//  Sample Output :
//      11
//
//////////////////////////////////////////////////////////////////