//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_321
//
//  Description       : Binary Search Tree (BST) Insertion, Inorder,
//                      Preorder, Postorder Traversal, Recursive
//                      Count and Search Operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/11/2026
//
//  Time Complexity   : O(n * h) for inserting n nodes.
//                      O(n) for traversal and counting.
//                      O(h) for searching.
//                      h represents the height of the tree.
//
//  Space Complexity  : O(n) for storing n nodes and O(h) for
//                      recursive traversal and counting.
//
//////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};

//////////////////////////////////////////////////////////////////
//
//  Structure Name    : node
//
//  Description       : Represents a node of a Binary Search Tree.
//                      It contains data and pointers to the left
//                      and right child nodes.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/11/2026
//
//////////////////////////////////////////////////////////////////

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Inorder
//
//  Description       : Performs recursive inorder traversal of
//                      the Binary Search Tree.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/11/2026
//
//  Input             : Address of the root node.
//
//  Output            : Displays nodes in Left, Root, Right order.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(h)
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
//  Description       : Performs recursive preorder traversal of
//                      the Binary Search Tree.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/11/2026
//
//  Input             : Address of the root node.
//
//  Output            : Displays nodes in Root, Left, Right order.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(h)
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
//  Description       : Performs recursive postorder traversal of
//                      the Binary Search Tree.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/11/2026
//
//  Input             : Address of the root node.
//
//  Output            : Displays nodes in Left, Right, Root order.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(h)
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
//                      Duplicate values are not inserted.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/11/2026
//
//  Input             : Address of the root pointer and integer value.
//
//  Output            : Inserts the value into the Binary Search Tree.
//
//  Time Complexity   : O(h)
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
//  Function Name     : Count
//
//  Description       : Counts the total number of nodes in the
//                      Binary Search Tree using recursion.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/11/2026
//
//  Input             : Address of the root node.
//
//  Output            : Returns the total number of nodes.
//
//  Time Complexity   : O(n)
//
//  Space Complexity  : O(h)
//
//////////////////////////////////////////////////////////////////

int Count(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        iCount++;
        Count(first->lchild);
        Count(first->rchild);
    }

    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Search
//
//  Description       : Searches for a given element in the Binary
//                      Search Tree using an iterative approach.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/11/2026
//
//  Input             : Address of the root node and integer value
//                      to be searched.
//
//  Output            : Returns true if the element is present;
//                      otherwise, returns false.
//
//  Time Complexity   : O(h)
//
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

bool Search(PNODE first, int iNo)
{
    bool bflag = false;

    while(first != NULL)
    {
        if(iNo == first->data)
        {
            bflag = true;
            break;
        }
        else if(iNo > first->data)
        {
            first = first->rchild;
        }
        else if(iNo < first->data)
        {
            first = first->lchild;
        }
    }

    return bflag;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates a Binary Search Tree, inserts
//                      integer values, displays inorder traversal,
//                      counts nodes and searches for an element.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 23/11/2026
//
//  Input             : No user input. Values are inserted directly.
//
//  Output            : Displays inorder traversal, total node count
//                      and search result.
//
//  Time Complexity   : O(n * h)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    Insert(&head,11);
    Insert(&head,5);
    Insert(&head,17);
    Insert(&head,21);
    Insert(&head,4);
    Insert(&head,7);
    Insert(&head,15);

    printf("Inorder Display : \n");
    Inorder(head);

    iRet = Count(head);
    printf("Number of nodes are : %d\n", iRet);    

    if(Search(head, 25) == true)
    {
        printf("25 is present in BST\n");
    }
    else
    {
        printf("25 is not present in BST\n");
    }
    return 0;
}

//////////////////////////////////////////////////////////////////
//
//  Sample Input
//
//  Values inserted:
//  11, 5, 17, 21, 4, 7, 15
//
//  Search element: 25
//
//////////////////////////////////////////////////////////////////
//
//  Sample Output
//
//  Inorder Display :
//  4
//  5
//  7
//  11
//  15
//  17
//  21
//  Number of nodes are : 7
//  25 is not present in BST
//
//////////////////////////////////////////////////////////////////