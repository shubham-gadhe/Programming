//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_317
//
//  Description       : Binary Search Tree (BST)
//                      Insertion, Inorder, Preorder and
//                      Postorder Traversal Operations
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/11/2026
//
//  Time Complexity   : O(n) - Tree Traversal
//                      O(h) - Insertion
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
//  Function Name     : Inorder
//
//  Description       : Performs inorder traversal of the Binary
//                      Search Tree (Left, Root, Right).
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/11/2026
//
//  Input             : Root node of the Binary Search Tree.
//
//  Output            : Displays all elements in ascending order.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(h) - Recursive call stack
//
//////////////////////////////////////////////////////////////////

void Inorder(PNODE first)
{
    if(first != NULL)
    {
        Inorder(first->lchild);
        printf("%d\n", first->data);
        Inorder(first->rchild);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Preorder
//
//  Description       : Performs preorder traversal of the Binary
//                      Search Tree (Root, Left, Right).
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/11/2026
//
//  Input             : Root node of the Binary Search Tree.
//
//  Output            : Displays all elements in preorder sequence.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(h) - Recursive call stack
//
//////////////////////////////////////////////////////////////////

void Preorder(PNODE first)
{
    if(first != NULL)
    {
        printf("%d\n", first->data);
        Preorder(first->lchild);
        Preorder(first->rchild);
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Postorder
//
//  Description       : Performs postorder traversal of the Binary
//                      Search Tree (Left, Right, Root).
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/11/2026
//
//  Input             : Root node of the Binary Search Tree.
//
//  Output            : Displays all elements in postorder sequence.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(h) - Recursive call stack
//
//////////////////////////////////////////////////////////////////

void Postorder(PNODE first)
{
    if(first != NULL)
    {
        Postorder(first->lchild);
        Postorder(first->rchild);
        printf("%d\n", first->data);
    }
}

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
//  Description       : Creates a Binary Search Tree, inserts
//                      elements and displays them using inorder,
//                      preorder and postorder traversals.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 22/11/2026
//
//  Input             : No user input.
//
//  Output            : Displays BST elements in all three
//                      traversal sequences.
//
//  Time Complexity   : O(n * h) - For n insertions, followed by
//                      O(n) traversal operations
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

    printf("Inorder Display : \n");
    Inorder(head);

    printf("Preorder Display : \n");
    Preorder(head);

    printf("Postorder Display : \n");
    Postorder(head);

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
//  Inorder Display :
//  5
//  11
//  17
//  Preorder Display :
//  11
//  5
//  17
//  Postorder Display :
//  5
//  17
//  11
//
//////////////////////////////////////////////////////////////////