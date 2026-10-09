//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_192
//
//  Description       : This program defines a structure named node,
//                      initializes its data member and next pointer,
//                      and displays the data member's value.
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
    struct node obj;

    obj.data = 11;
    obj.next = NULL;

    printf("%d\n", obj.data);

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