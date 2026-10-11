//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_200
//
//  Description       : This program creates three linked nodes and
//                      traverses them using a temporary pointer to
//                      display the data stored in each node.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 11/10/2026
//
//  Time Complexity   : O(1)
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

int main()
{
    PNODE head = NULL;
    PNODE temp = NULL;

    NODE obj1, obj2, obj3;

    head = &obj1;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    temp = head;

    printf("%d\n", temp->data);

    temp = temp->next;
    printf("%d\n", temp->data);

    temp = temp->next;
    printf("%d\n", temp->data);

    temp = temp->next;

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
//
//////////////////////////////////////////////////////////////////