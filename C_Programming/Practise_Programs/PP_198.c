//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_198
//
//  Description       : This program defines a structure named node
//                      and creates typedef aliases NODE and PNODE.
//                      It links three nodes using pointers and displays
//                      the data of all three nodes through the head
//                      pointer.
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
    NODE obj1, obj2, obj3;

    head = &obj1;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    printf("%d\n", head->data);
    printf("%d\n", head->next->data);
    printf("%d\n", head->next->next->data);

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