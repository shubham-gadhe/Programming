//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_070
//
//  Description       : Implements a Singly Circular Linked List
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
//                      DeleteLast()  - O(n)
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
//  Description       : Represents a node of a Singly Circular
//                      Linked List containing data and next pointer.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//////////////////////////////////////////////////////////////////

struct node
{
    int data;
    struct node *next;
};

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Class Name        : SinglyCL
//
//  Description       : Provides member functions to perform
//                      display, count, insertion, and deletion
//                      operations on a Singly Circular Linked List.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//////////////////////////////////////////////////////////////////

class SinglyCL
{
    private:
        struct node* first;
        struct node* last;
        int iCount;

    public:
        SinglyCL();

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
//  Function Name     : SinglyCL
//
//  Description       : Initializes the first and last pointers
//                      to NULL and the node counter to zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 03/11/2026
//
//  Input             : None.
//  Output            : Initializes the SinglyCL object.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

SinglyCL :: SinglyCL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Displays all elements of the Singly
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

void SinglyCL :: Display()
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    struct node* temp = NULL;
    temp = first;

    do 
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }while(temp != first);

    cout<<endl;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Count
//
//  Description       : Returns the total number of nodes in the
//                      Singly Circular Linked List.
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

int SinglyCL :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst
//
//  Description       : Inserts a new node at the beginning of
//                      the Singly Circular Linked List.
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

void SinglyCL :: InsertFirst(int iNo)
{
    struct node* newn = NULL;

    newn = new struct node;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    iCount++;

    last->next = first;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertLast
//
//  Description       : Inserts a new node at the end of the
//                      Singly Circular Linked List.
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

void SinglyCL :: InsertLast(int iNo)
{
    struct node* newn = NULL;

    newn = new struct node;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }

    iCount++;

    last->next = first;

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

void SinglyCL :: InsertAtPos(int iNo, int iPos)
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

        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteFirst
//
//  Description       : Deletes the first node from the Singly
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

void SinglyCL :: DeleteFirst()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete(first);
        first = NULL;
        last = NULL;

        iCount--;
    }
    else 
    {
        first = first->next;
        delete(last->next);

        last->next = first;

        iCount--;
    }    
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DeleteLast
//
//  Description       : Deletes the last node from the Singly
//                      Circular Linked List.
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

void SinglyCL :: DeleteLast()
{
    struct node* temp = NULL;

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
        temp = first;

        while(temp->next != last)
        {
            temp = temp->next;
        }

        delete(last);
        last = temp;

        last->next = first;
        iCount--;        
    }
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

void SinglyCL :: DeleteAtPos(int iPos)
{
    struct node* temp = NULL;
    struct node* target = NULL;

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

        target = temp->next;

        temp->next = target->next;
        delete(target);

        iCount--;
    }
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : main
//
//  Description       : Creates a Singly Circular Linked List and
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
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    SinglyCL sobj;
    int iRet = 0;

    cout<<endl;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.InsertAtPos(105, 4);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.DeleteFirst();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.DeleteLast();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are : "<<iRet<<endl;

    cout<<endl;

    sobj.DeleteAtPos(4);

    sobj.Display();
    iRet = sobj.Count();
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
//  | 11 | -> | 21 | -> | 51 | ->
//  Number of Nodes are : 3
//
//  | 11 | -> | 21 | -> | 51 | -> | 101 | -> | 111 | -> | 121 | ->
//  Number of Nodes are : 6
//
//  | 11 | -> | 21 | -> | 51 | -> | 105 | -> | 101 | -> | 111 | -> | 121 | ->
//  Number of Nodes are : 7
//
//  | 21 | -> | 51 | -> | 105 | -> | 101 | -> | 111 | -> | 121 | ->
//  Number of Nodes are : 6
//
//  | 21 | -> | 51 | -> | 105 | -> | 101 | -> | 111 | ->
//  Number of Nodes are : 5
//
//  | 21 | -> | 51 | -> | 105 | -> | 111 | ->
//  Number of Nodes are : 4
//
//////////////////////////////////////////////////////////////////