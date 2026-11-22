//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_316
//
//  Description       : Binary Search Tree (BST)
//                      Node Insertion Operation
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/11/2026
//
//  Time Complexity   : O(h) - h is the height of the tree
//
//  Space Complexity  : O(n) - Binary Search Tree
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////
//
//  Structure Name    : node
//
//  Description       : Represents a node of a Binary Search Tree.
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
//  Function Name     : Insert
//
//  Description       : Inserts a new node into the Binary Search
//                      Tree while maintaining BST properties.
//                      Duplicate elements are not inserted.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/11/2026
//
//  Input             : Address of the root pointer and integer value.
//
//  Output            : Inserts a new node into the Binary Search
//                      Tree or displays a message for duplicates.
//
//  Time Complexity   : O(h) - h is the height of the tree
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void Insert(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(1)
        {
            if(iNo > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }

                temp = temp->rchild;
            }
            else if(iNo < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }

                temp = temp->lchild;
            }
            else if(iNo == temp->data)
            {
                printf("Unable to insert as element is duplicate\n");
                free(newn);
                break;
            }
        }
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Initializes an empty Binary Search Tree
//                      and inserts three integer elements.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/11/2026
//
//  Input             : No user input.
//
//  Output            : Creates a Binary Search Tree.
//
//  Time Complexity   : O(n * h) - For n insertions
//
//  Space Complexity  : O(n) - Binary Search Tree
//
//////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;

    Insert(&head,11);
    Insert(&head,5);
    Insert(&head,17);

    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  No input required. Values are inserted directly in main().
//
//  Insert(&head,11);
//  Insert(&head,5);
//  Insert(&head,17);
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  No output.
//
//////////////////////////////////////////////////////////////////