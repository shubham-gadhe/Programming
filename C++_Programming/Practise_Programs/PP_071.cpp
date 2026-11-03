//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_071
//
//  Description       : Implements a Doubly Circular Linked List
//                      using a C++ class with display, count,
//                      insertion, and deletion operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Time Complexity   : Display()     - O(n)
//                      Count()       - O(1)
//                      InsertFirst() - O(1)
//                      InsertLast()  - O(1)
//                      InsertAtPos() - O(n)
//                      DeleteFirst() - O(1)
//                      DeleteLast()  - O(1)
//                      DeleteAtPos() - O(n)
//
//  Space Complexity  : O(n), where n is the number of nodes.
//
//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Structure Name    : node
//
//  Description       : Represents a node of a Doubly Circular
//                      Linked List containing data, next,
//                      and prev pointers.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//////////////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

//////////////////////////////////////////////////////////////////
//
//  Class Name        : DoublyCL
//
//  Description       : Provides member functions to perform
//                      display, count, insertion, and deletion
//                      operations on a Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//////////////////////////////////////////////////////////////////

class DoublyCL
{
    private:
        struct node* first;
        struct node* last;
        int iCount;

    public:
        DoublyCL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DoublyCL
//
//  Description       : Initializes the first and last pointers
//                      to NULL and the node counter to zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Initializes the DoublyCL object.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

DoublyCL :: DoublyCL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Displays all elements of the Doubly
//                      Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Displays linked list elements.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: Display()
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    struct node* temp = NULL;

    temp = first;

    cout<<"NULL <=> ";

    do 
    {
        cout<<" | "<<temp->data<<" | <=> ";
        temp = temp->next;
    }while(temp != last->next);

    cout<<"NULL"<<endl;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count
//
//  Description       : Returns the total number of nodes in the
//                      Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Returns the node count.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int DoublyCL :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst
//
//  Description       : Inserts a new node at the beginning of
//                      the Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : Integer value.
//  Output            : Inserts a new node at the beginning.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: InsertFirst(int iNo)
{
    struct node* newn = NULL;

    newn = new struct node;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;

        first = newn;
        newn->prev = first;
    }

    iCount++;

    last->next = first;
    first->prev = last;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast
//
//  Description       : Inserts a new node at the end of the
//                      Doubly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : Integer value.
//  Output            : Inserts a new node at the end.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: InsertLast(int iNo)
{
    struct node* newn = NULL;

    newn = new struct node;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;
        last = newn;
    }

    iCount++;

    last->next = first;
    first->prev = last;

}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertAtPos
//
//  Description       : Inserts a new node at the specified
//                      position in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : Integer value and position.
//  Output            : Inserts a new node at the given position.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: InsertAtPos(int iNo, int iPos)
{
    struct node* newn = NULL;
    struct node* temp = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        newn = new struct node;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst
//
//  Description       : Deletes the first node from the Doubly
//                      Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Deletes the first node.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete(first);
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete(first->prev);
    }

    iCount--;

    last->next = first;
    first->prev = last;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast
//
//  Description       : Deletes the last node from the Doubly
//                      Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Deletes the last node.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete(first);
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete(last->next);
    }

    iCount--;

    last->next = first;
    first->prev = last;

}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteAtPos
//
//  Description       : Deletes a node from the specified
//                      position in the linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : Position of the node to be deleted.
//  Output            : Deletes the node at the given position.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyCL :: DeleteAtPos(int iPos)
{
    struct node* temp = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete(temp->next->prev);
        temp->next->prev = temp;

        iCount--;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates a Doubly Circular Linked List and
//                      performs insertion, deletion, display,
//                      and count operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Displays linked list elements and node
//                      count after each operation.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

int main()
{
    DoublyCL dobj;
    int iRet = 0;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    dobj.InsertAtPos(105, 4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    dobj.DeleteFirst();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    dobj.DeleteLast();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    dobj.DeleteAtPos(4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

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
//  NULL <=>  | 11 | <=>  | 21 | <=>  | 51 | <=> NULL
//  Number of Nodes are : 3
//
//  NULL <=>  | 11 | <=>  | 21 | <=>  | 51 | <=>  | 101 | <=>  | 111 | <=>  | 121 | <=> NULL
//  Number of Nodes are : 6
//
//  NULL <=>  | 11 | <=>  | 21 | <=>  | 51 | <=>  | 105 | <=>  | 101 | <=>  | 111 | <=>  | 121 | <=> NULL
//  Number of Nodes are : 7
//
//  NULL <=>  | 21 | <=>  | 51 | <=>  | 105 | <=>  | 101 | <=>  | 111 | <=>  | 121 | <=> NULL
//  Number of Nodes are : 6
//
//  NULL <=>  | 21 | <=>  | 51 | <=>  | 105 | <=>  | 101 | <=>  | 111 | <=> NULL
//  Number of Nodes are : 5
//
//  NULL <=>  | 21 | <=>  | 51 | <=>  | 105 | <=>  | 111 | <=> NULL
//  Number of Nodes are : 4
//
//////////////////////////////////////////////////////////////////