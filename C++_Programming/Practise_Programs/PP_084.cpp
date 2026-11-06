//////////////////////////////////////////////////////////////////
//
//  File Name         : PP_084
//
//  Description       : Generic Doubly Circular Linked List
//                      Implementation using Template.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Time Complexity   : InsertFirst()  - O(1)
//                      InsertLast()   - O(1)
//                      InsertAtPos()  - O(n)
//                      DeleteFirst()  - O(1)
//                      DeleteLast()   - O(1)
//                      DeleteAtPos()  - O(n)
//                      Display()      - O(n)
//                      Count()        - O(1)
//
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

// DOUBLY CIRCULAR LINKEDLIST

#include<iostream>
using namespace std;

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Structure Name    : node
//
//  Description       : Represents a node of a doubly circular
//                      linked list using a generic data type.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//////////////////////////////////////////////////////////////////

template <class T>
struct node
{
    T data;
    struct node<T> *next;
    struct node<T> *prev;
};

#pragma pack(1)

//////////////////////////////////////////////////////////////////
//
//  Class Name        : DoublyCL
//
//  Description       : Implements a generic doubly circular
//                      linked list with insertion, deletion,
//                      display and counting operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//////////////////////////////////////////////////////////////////

template <class T>
class DoublyCL
{
    private:
        struct node<T> *first;
        struct node<T> *last;
        int iCount;

    public:
        DoublyCL();
        void Display();
        T Count();
        void InsertFirst(T iNo);
        void InsertLast(T iNo);
        void InsertAtPos(T iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

//////////////////////////////////////////////////////////////////
//
//  Function Name     : DoublyCL
//
//  Description       : Initializes the first and last pointers
//                      to NULL and sets the node count to zero.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None
//  Output            : Initializes the linked list.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
DoublyCL<T> :: DoublyCL()
{
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : Display
//
//  Description       : Displays all elements of the doubly
//                      circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None
//  Output            : Displays all nodes from first to last.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T> :: Display()
{
    if(first == NULL && last == NULL)
    {
        return;
    }

    struct node<T> *temp = NULL;

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
//  Description       : Returns the total number of nodes present
//                      in the doubly circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None
//  Output            : Returns the node count.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
T DoublyCL<T> :: Count()
{
    return iCount;
}

//////////////////////////////////////////////////////////////////
//
//  Function Name     : InsertFirst
//
//  Description       : Inserts a new node at the beginning of
//                      the doubly circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : iNo - Data to be inserted.
//  Output            : Inserts a node at the beginning.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T> :: InsertFirst(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

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
//                      doubly circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : iNo - Data to be inserted.
//  Output            : Inserts a node at the end.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T> :: InsertLast(T iNo)
{
    struct node<T> *newn = NULL;

    newn = new struct node<T>;

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
//  Date              : 06/11/2026
//
//  Input             : iNo  - Data to be inserted.
//                      iPos - Position for insertion.
//  Output            : Inserts a node at the specified position.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T> :: InsertAtPos(T iNo, int iPos)
{
    struct node<T> *newn = NULL;
    struct node<T> *temp = NULL;
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
        newn = new struct node<T>;

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
//  Description       : Deletes the first node from the doubly
//                      circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None
//  Output            : Removes the first node.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T> :: DeleteFirst()
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
//  Description       : Deletes the last node from the doubly
//                      circular linked list.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : None
//  Output            : Removes the last node.
//
//  Time Complexity   : O(1)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T> :: DeleteLast()
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
//  Date              : 06/11/2026
//
//  Input             : iPos - Position of the node to be deleted.
//  Output            : Removes the node at the specified position.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(1)
//
//////////////////////////////////////////////////////////////////

template <class T>
void DoublyCL<T> :: DeleteAtPos(int iPos)
{
    struct node<T> *temp = NULL;
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
//  Description       : Creates a generic doubly circular linked
//                      list and performs insertion, deletion,
//                      display and counting operations.
//
//  Author            : Shubham Somanath Gadhe
//  Date              : 06/11/2026
//
//  Input             : No input required.
//  Output            : Displays linked list elements and node counts.
//
//  Time Complexity   : O(n)
//  Space Complexity  : O(n)
//
//////////////////////////////////////////////////////////////////

int main()
{
    DoublyCL<int> dobj;
    int iRet = 0;

    cout<<endl;

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