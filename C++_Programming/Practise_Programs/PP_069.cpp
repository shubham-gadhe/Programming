//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_069
//
//  Description       : Implements a Doubly Linear Linked List
//                      using a C++ class with display, count,
//                      insertion, and deletion operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Time Complexity   : Display()     - O(n)
//                      Count()       - O(1)
//                      InsertFirst() - O(1)
//                      InsertLast()  - O(n)
//                      InsertAtPos() - O(n)
//                      DeleteFirst() - O(1)
//                      DeleteLast()  - O(n)
//                      DeleteAtPos() - O(n)
//
//  Space Complexity  : O(n), where n is the number of nodes.
//
//////////////////////////////////////////////////////////////////

// DOUBLY LINIEAR LINKEDLIST

#include<iostream>
using namespace std;

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Structure Name    : node
//
//  Description       : Represents a node of a Doubly Linear
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

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Class Name        : DoublyLL
//
//  Description       : Provides member functions to perform
//                      display, count, insertion, and deletion
//                      operations on a Doubly Linear Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//////////////////////////////////////////////////////////////////

class DoublyLL
{
    private:
        struct node* first;
        int iCount;

    public:
        DoublyLL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iNo);
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DoublyLL
//
//  Description       : Initializes the first pointer to NULL
//                      and the node counter to zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Initializes the DoublyLL object.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

DoublyLL :: DoublyLL()
{
    this->iCount = 0;       
    this->first = NULL;     
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Displays all elements of the Doubly
//                      Linear Linked List.
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

void DoublyLL :: Display()
{
    struct node* temp = NULL;

    temp = first;

    cout<<" NULL <=> ";

    while(temp != NULL)
    {
        cout<<" | "<<temp->data<<" | <=>";
        temp = temp->next;
    }

    cout<<" NULL\n";
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count
//
//  Description       : Returns the total number of nodes in the
//                      Doubly Linear Linked List.
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

int DoublyLL :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst
//
//  Description       : Inserts a new node at the beginning of
//                      the Doubly Linear Linked List.
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

void DoublyLL :: InsertFirst(int iNo)
{
    struct node* newn = NULL;

    newn = new struct node;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }

    iCount++;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast
//
//  Description       : Inserts a new node at the end of the
//                      Doubly Linear Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : Integer value.
//  Output            : Inserts a new node at the end.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyLL :: InsertLast(int iNo)
{
    struct node* newn = NULL;
    struct node* temp = NULL;

    newn = new struct node;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;        
    }

    iCount++;
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

void DoublyLL :: InsertAtPos(int iNo, int iPos)
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
//                      Linear Linked List.
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

void DoublyLL :: DeleteFirst()
{
    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete(first);
        first = NULL;
    }
    else
    {   
        first = first->next;
        delete first->prev;
        first->prev = NULL;
    }

    iCount--;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast
//
//  Description       : Deletes the last node from the Doubly
//                      Linear Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Deletes the last node.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

void DoublyLL :: DeleteLast()
{
    struct node* temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete(first);
        first = NULL;
    }
    else
    {
        temp = first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete(temp->next);

        temp->next = NULL;
    }

    iCount--;
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

void DoublyLL :: DeleteAtPos(int iPos)
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
        delete (temp->next->prev);
        temp->next->prev = temp;      

        iCount--;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates a Doubly Linear Linked List and
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
    DoublyLL dobj;
    int iRet = 0;

    cout<<endl;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet;

    cout<<endl;

    cout<<endl;

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet;

    cout<<endl;   

    cout<<endl;

    dobj.InsertAtPos(105, 4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet;

    cout<<endl;   

    cout<<endl;

    dobj.DeleteFirst();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet;

    cout<<endl;

    cout<<endl;

    dobj.DeleteLast();

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet;

    cout<<endl;

    cout<<endl;

    dobj.DeleteAtPos(4);

    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of Nodes are : "<<iRet;

    cout<<endl;   

    cout<<endl;

    return 0;
};

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
//   NULL <=>  | 11 | <=> | 21 | <=> | 51 | <=> NULL
//  Number of Nodes are : 3
//
//   NULL <=>  | 11 | <=> | 21 | <=> | 51 | <=> | 101 | <=> | 111 | <=> | 121 | <=> NULL
//  Number of Nodes are : 6
//
//   NULL <=>  | 11 | <=> | 21 | <=> | 51 | <=> | 105 | <=> | 101 | <=> | 111 | <=> | 121 | <=> NULL
//  Number of Nodes are : 7
//
//   NULL <=>  | 21 | <=> | 51 | <=> | 105 | <=> | 101 | <=> | 111 | <=> | 121 | <=> NULL
//  Number of Nodes are : 6
//
//   NULL <=>  | 21 | <=> | 51 | <=> | 105 | <=> | 101 | <=> | 111 | <=> NULL
//  Number of Nodes are : 5
//
//   NULL <=>  | 21 | <=> | 51 | <=> | 105 | <=> | 111 | <=> NULL
//  Number of Nodes are : 4
//
//////////////////////////////////////////////////////////////////