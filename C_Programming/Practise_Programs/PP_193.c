//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_193
//
//  Description       : This program creates two structure objects,
//                      links the first node to the second node using
//                      a pointer, and displays the data of both nodes.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 09/10/2026
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

int main()
{
    struct node obj1, obj2;

    obj1.data = 11;
    obj1.next = &obj2;

    obj2.data = 21;
    obj2.next = NULL;

    printf("%d\n", obj1.data);
    printf("%d\n", obj2.data);

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
//
//////////////////////////////////////////////////////////////////