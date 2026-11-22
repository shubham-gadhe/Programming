//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_313
//
//  Description       : Defines the structure of a Binary Tree
//                      using a node with left and right child
//                      pointers.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/11/2026
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////
//
//  Structure Name    : node
//
//  Description       : Represents a node of a binary tree.
//                      Contains data, left child pointer and
//                      right child pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/11/2026
//
//////////////////////////////////////////////////////////////////

#pragma pack(1)
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Initializes the root pointer of a
//                      binary tree to NULL.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/11/2026
//
//  Input             : No user input.
//
//  Output            : Initializes an empty binary tree.
//
//  Time Complexity   : O(1)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;

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
//  No output.
//
//////////////////////////////////////////////////////////////////